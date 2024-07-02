#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int> &v){
    int n=v.size();
    vector<int>result(n,-1);//all initialized to -1.
    stack<int>st;
    for (int i =2*n-1; i>=0 ; i--)// Circular array (double size) 3 1 2 1
    {
        while (!st.empty() && v[i%n]>=st.top())
        {
            st.pop();
        }
        if(i<n and !st.empty()){
            result[i]=st.top();
        }
        st.push(v[i%n]);
        
    }
    return result;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    vector<int>nge=CircularNGE(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" "<<nge[i]<<endl;
    }
    
    
    


    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/