#include<bits/stdc++.h>
using namespace std;

int binaryTodecimal(int n){

    int x=1,result=0;
    while (n)
    {
        int y=n%10;
        result+=y*x;
        x*=2;
        n/=10;
    }
    return result;
    
}
int main(){
    int n;
    cin>>n;
    int ans=binaryTodecimal(n);
    cout<<ans<<endl;
}