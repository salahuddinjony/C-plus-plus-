#include<bits/stdc++.h>
using namespace std;

int hexatodecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for (int i =s-1; i >=0; i--)
    {
       if(n[i]>='0' and n[i]<='9'){

           ans+=x*(n[i]-'0');

       }
       else if (n[i]>='A' and n[i]<='F')
       {
           ans+=x*(n[i]-'A'+10);
       }
       x*=16;
       
    }
    return ans;
    
}

int main(){

    string n;
    cin>>n;
    int result=hexatodecimal(n);
    cout<<result<<endl;
}