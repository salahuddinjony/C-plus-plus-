#include<bits/stdc++.h>
using namespace std;

// Inline function 
inline int product(int a, int b){
    return a*b;

}


int product(int a, int b){
    static int c=0; //This execute only once
    c=c+1; // Next time the function is run , and c will be retained 
    return a*b+c;
}


// Default Arguments
float MoneyReceived(int CurrentMoney, float factor=1.04){

    return CurrentMoney * factor;
}

//Constant Arguments

int main(){

   /*  int a,b;
    cout<<"Enter the a and b: ";
    cin>>a>>b;
    cout<<"The result is "<<product(a,b)<<endl;
    cout<<"The result is "<<product(a,b)<<endl;
    cout<<"The result is "<<product(a,b)<<endl;
    cout<<"The result is "<<product(a,b)<<endl;
    cout<<"The result is "<<product(a,b)<<endl; */

    int money=100000;


    cout<<"Your have "<<money<<" tk in your bank accout, you will receive "<<MoneyReceived(money)<<endl;
    cout<<"for VIP: Your have "<<money<<" tk in your bank accout, you will receive "<<MoneyReceived(money,1.1)<<endl;




}

