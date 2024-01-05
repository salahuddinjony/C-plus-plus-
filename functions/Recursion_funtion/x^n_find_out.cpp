#include<bits/stdc++.h>
using namespace std;
int power(int x, int n);

int main(){

    int x,n;
    cin>>x>>n;
    int xn=power(x,n);
    cout<<xn;
}

int power(int x,int n){
    
    if(n==0){
        return 1;
    }
    else
    return x*power(x,n-1);
}