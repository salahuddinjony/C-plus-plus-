#include<bits/stdc++.h>
using namespace std;
int decimalTobinary(int n){
    int x=1;
    int ans=0;
    while (x<=n){
        x*=2;

    }
    x/=2;

    while (x>0)
    {
        int lastdigit=n/x; //1 0 0 0
        n-=lastdigit*x;//0 0 0
        x/=2; //4 2 1 0
        ans=ans*10+lastdigit; //1000
        
    }
    
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int result=decimalTobinary(n);
    cout<<result<<endl;

}