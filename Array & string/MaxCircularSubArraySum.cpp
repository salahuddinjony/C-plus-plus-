/* A circular array is an array/list in which the end of the array 
connects to the beginning of the array. A subarray may only include
each element of the fixed buffer of 'ARR' at most once.
 */

#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n){

    int currSum=0;
    int mxSum=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        mxSum=max(mxSum,currSum);
        
    }
    return mxSum;
    
}

int main(){

    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum=kadane(a,n);
    int totalSum=0;

    for (int i = 0; i <n; i++)
    {
        totalSum+=a[i];
        a[i]=-a[i];
        
    }

    wrapsum=totalSum - (-kadane(a,n));
    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    
}