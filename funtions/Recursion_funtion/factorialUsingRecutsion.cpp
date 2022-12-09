// Factorial of n = 1*2*3*...*n

#include<iostream>
using namespace std;


int factorial(int n);

int main(){
    int n;
    cin>>n;
    int result=factorial(n);
    cout<<"Factorial "<<n<<"! = "<<result<<endl;
}

int factorial(int n){

    if (n>1)
    {
        return n*factorial(n-1);  //this is recursive function which is called it self until condition is true
    }
    return 1;
    
}