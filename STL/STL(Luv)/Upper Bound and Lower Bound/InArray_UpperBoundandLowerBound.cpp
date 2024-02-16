#include<bits/stdc++.h>
using namespace std;
/*
6
4 5 5 25 7 8
*/
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    sort(A,A+n); //Must be sorted the array before find lower and upper bound
    /* for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    } */
    for (int val : A)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    int *lb=lower_bound(A,A+n,8); //Log(n) of time complexity
    int *ub=upper_bound(A,A+n,6);
    if(lb==(A+n)){
        cout<<"Lower bound,not found!"<<endl;
    }else cout<<*lb<<endl;
    if(ub==(A+n)){
        cout<<"Upper bound,not found!"<<endl;
    }else cout<<*ub<<endl;

    int min=*min_element(A,A+n);
    int max=*max_element(A,A+n);
    int sum=accumulate(A,A+n,0);
    cout<<"Min is "<<min<<endl;
    cout<<"Max is "<<max<<endl;
    cout<<"Sum is "<<sum<<endl;
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/