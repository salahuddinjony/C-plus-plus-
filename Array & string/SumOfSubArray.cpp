#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int currentSum=0;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        currentSum=0;
        for (int j=i; j<n; j++)
        {
            currentSum+=a[j];
            cout<<currentSum<<" ";
        }
        
    }
    
    
}