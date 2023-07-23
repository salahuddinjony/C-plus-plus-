#include<bits/stdc++.h>
using namespace std;
int binaryTodecimal(int n){
    int x=1,y;
    int ans=0;
    while (n){
        y=n%10;
        ans+=y*x;
        x*=2;
        n/=10;

    }   

    
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int result=binaryTodecimal(n);
    cout<<result<<endl;

}