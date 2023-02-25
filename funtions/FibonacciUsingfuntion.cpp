#include<bits/stdc++.h>
using namespace std;

void fibo(int num){
    int t1=0;
    int t2=1;
    int nextTerm;
    
    for (int i =1; i <=num; i++)
    {
        cout<<t1<<" ";              //0 1 1 2
        nextTerm=t1+t2;             //0+1=1  1+1=2 1+2=3 2+3=5
        t1=t2;                      //1 1 2 3
        t2=nextTerm;                //1 2 3
    }
    cout<<endl;

    
}
int main(){
    int n;
    cin>>n;
    fibo(n);
}