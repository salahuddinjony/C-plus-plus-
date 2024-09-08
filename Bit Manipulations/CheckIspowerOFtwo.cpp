#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isPower(int n){
    if(n<=0) return false;
    return (n & (n-1))==0;
   /*  while (!(n%2))
    {
        n/=2;
    }
    return n==1; */
    
}
int main(){
    optimize();
    int n;
    cin>>n;
    cout<<isPower(n)<<endl;




    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/