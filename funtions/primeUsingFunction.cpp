#include<bits/stdc++.h>
using namespace std;

bool prime(int num){

    for (int i = 2; i <=sqrt(num); i++)
    {
        if(num%i==0){
            return false; ///Haven't need to use break cause this statement will be out of loop when it will be false
        }
    }
    return true;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    for (int i =a; i <=b; i++)
    {
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    
}