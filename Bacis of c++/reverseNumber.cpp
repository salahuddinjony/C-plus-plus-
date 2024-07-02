#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit,reverse=0;
    cin>>n;
    while (n)
    {
        lastdigit=n%10;
        reverse=10*reverse+lastdigit;
        n=n/10;
    }
    
    cout<<reverse<<endl;
    
}