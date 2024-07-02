#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    cout<<"The array is:";
    for (int i = 0; i <n; i++)
    {
       cin>>a[i];
    }

    for (int i = 0; i <n; i++) //n
    {
        for (int j = i; j <n; j++)  // n(n)
        {
           for (int k=i; k <=j; k++) //n(n*n)=n^3 time comlexity
           {
              cout<<a[k]<<" ";
           }
           cout<<endl;
           
        }
        
    }
    
    
}