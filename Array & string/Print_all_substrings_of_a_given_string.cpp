#include<iostream>
#include<stdint.h>
using namespace std;

void substring(string s, int n){

    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j <=n-i; j++)    ///salah s sa sal sala salah a al ala alah l la lah a ah h
        {
           cout<<s.substr(i,j)<<endl ;
            
        }
        
        
    }
    

}
int main(){
    string s;
    cin>>s;
    substring(s,s.length());
}
