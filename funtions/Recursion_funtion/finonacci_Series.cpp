#include<bits/stdc++.h>
using namespace std;

int fibo(int z);
int main(){

    int n;
    cin>>n;
    for (int  i =1; i <=n; i++)
    {
        int z =fibo(i);
        cout<<z<<" "; //output: 0 1 1 2 3 5 8 
    }
    
}
int fibo(int z){

    if(z==1){
        return 0;
    }
    else if (z==2 or z==3)
    {
        return 1;
    }
    else
    return fibo(z-1)+fibo(z-2);
    





}