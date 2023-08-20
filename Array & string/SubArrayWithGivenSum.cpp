/* Problem:
Given an unsorted array A of size N of non-negative integers, 
find a continuous subarray which adds to a given number S.
Constraints:
1 <= N <= 105
O <= Ai <= 1010 

Brute Force:
Find sum of all possible subarrays. If any of the sum equates to
S, output the starting and ending index of the subarray.

Time Complexity: O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    
    }
    int i=0,j=0,st=-1,en=-1,sum=0;

    while (j<n and sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }

    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0; //return 0 means this program is end in this positon and compiler not going to or check down statements
    }

    while (j<n)
    {
        sum+=a[j];
        while (sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
        
    }

    cout<<st<<" "<<en<<endl;
    
    


    

}