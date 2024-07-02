#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,t=0,m;
    cin>>n;
    for (int i =1; i <=n; i++)
    {
        m=((t*10)+1);
        cout<<m<<" ";
        if(i<n){
             cout<<"+ ";
        }
        t=m;
        sum+=m;
    }
     cout<<endl;
    cout<<"The Sum is="<<sum<<endl;
    

}