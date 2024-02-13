#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,-1);//all initialized to -1.
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){ // Circular array (double size)
            while(!st.empty() and st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(!st.empty()) result[i]=st.top();
            }
        st.push(nums[i%n]);
        }
    return result;        
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for (int i = 0; i <n; i++)
    {
       cin>>nums[i];
    }
    vector<int>result = nextGreaterElements(nums);
    for (int i = 0; i <n; i++)
    {
        cout<<nums[i]<<" "<<result[i]<<endl;
    }
    
    

    return 0;
}