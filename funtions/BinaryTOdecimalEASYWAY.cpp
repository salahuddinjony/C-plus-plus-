#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    for(int i =n,j=1; i>0; i/=10,j*=2)
    {
        ans+=i%10*j;

    }
    cout<<ans<<endl;
    
}
