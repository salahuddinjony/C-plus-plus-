#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int factorial=1;
    for (int i =1; i <=num; i++)
    {
       factorial*=i;
    }
    return factorial;
    
}
int main(){

    int n,r;
    cout<<"Enter your n and c of nCr: ";
    cin>>n>>r;

    int result=fact(n)/(fact(n-r)*fact(r));
    cout<<n<<"C"<<r<<": "<<result<<endl;

}