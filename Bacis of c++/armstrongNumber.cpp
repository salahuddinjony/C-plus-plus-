#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int sum=0;
    while (n)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(m==sum){
        cout<<"Armstrong number"<<endl;
    }
    else
    cout<<"Not armstrong number"<<endl;
    
}