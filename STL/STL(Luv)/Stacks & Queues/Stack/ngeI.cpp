#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int>m;
    stack<int>st;
    for(int n: nums2){
        while (!st.empty() and st.top()<n)
        {
           m[st.top()]=n;
           st.pop();
        }
        st.push(n);
        
    }
    vector<int>result;
    for(int n: nums1){
        result.push_back(m.count(n) ? m[n] : -1);  //The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
    }
    return result;
       
}
int main()
{
    int N, SubN;
    cin >> SubN >>N;
    vector<int> Num1(SubN);
    vector<int> Num2(N);
    for (int i = 0; i < SubN; i++)
    {
        cin >> Num2[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Num1[i];
    }
    vector<int> result = nextGreaterElement(Num2, Num1);
    for (int i = 0; i <SubN; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/