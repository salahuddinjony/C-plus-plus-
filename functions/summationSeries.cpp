#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for (int i = 2; i<n; i=+2)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
}