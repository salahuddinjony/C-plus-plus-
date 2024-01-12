#include<bits/stdc++.h>
using namespace std;

string decimalTohexadecimal(int n){
    int x=1;
    string ans="";
    while (n>x)
    {
        x*=16;
        
    }
    x/=16;
    while (x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit<=9){
            ans+=to_string(lastdigit);
        }
        else{
            char c=lastdigit + 'A' - 10;
            ans.push_back(c);
            
        }
      
    }
    return ans;
    
    
}
int main(){

    int n;
    cin>>n;
    cout<<decimalTohexadecimal(n)<<endl;
}