#include<bits/stdc++.h>
using namespace std;

int DecinalToOctal(int n){
    int ans=0,x=1;
    while (x<=n)
    {
       x*=8;
    }
    x/=8;
    while (x<0)
    {
       int lastdigit=n/x;
       n-=lastdigit*x;
       x/=8;
       ans=ans*10+lastdigit;
    }
    return ans;
    
    
}
int main(){
    int n;
    cin>>n;
    int result=DecinalToOctal(n);
    cout<<result<<endl;
}