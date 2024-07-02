/* PAIR SUM PROBLEM
Check if there exists two elements in an array such that their 
sum is equal to given k */

#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n, int k){

    for (int i = 0; i <n-1; i++)
    {
        for (int j =i+1; j <n; j++)
        {
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
        
    }
    return false;
    
}
int main(){

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int k=11;
   cout<<pairsum(a,n,k)<<endl; 
    
}