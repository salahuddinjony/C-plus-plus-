/* PAIR SUM PROBLEM
Check if there exists two elements in an array such that their 
sum is equal to given k */

#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n, int k){

    int low=0;
    int high=n-1;
    
    while (low<high)   //time complexity O(n^2) to O(n)
    {
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (a[low]+a[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
        
    }
    return false;
    
    
    
}
int main(){

    int n;
    cin>>n;
    cout<<"array Must sorted: ";
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int k=11;
   cout<<pairsum(a,n,k)<<endl; 
    
}