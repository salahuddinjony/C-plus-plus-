#include<bits/stdc++.h>
using namespace std;

/* Problem:

Given an array arr[] of size N. The task is to find the first 
repeating element in the array of integers, i.e., an element that 
occurs more than once and whose index of first occurrence 
is smallest.

Constraints:
1 <=N <= 106
O <= Ai <= 106 */

int main(){

    int n;
    cin>>n;
    int a[n];
    for (int i =0; i <n; i++)
    {
        cin>>a[i];
    }

    const int N=1e6+2; //"e" is often used to denote exponentiation in this context. so, N=1e6+2 is N=10^6+1==1000002
    int idx[N];
    int minidx=INT_MAX;
    for (int i = 0; i <N; i++)
    {
        idx[i]=-1;
    }

    for (int i = 0; i <n; i++)
    {
        if(idx[a[i]]!=-1){

            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){

        cout<<"-1";
    }
    else{
        cout<< minidx+1 <<endl;
    }
    
    


}