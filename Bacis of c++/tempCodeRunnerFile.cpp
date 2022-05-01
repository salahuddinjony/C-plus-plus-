#include<iostream>
using namespace std;
int main(){


    int n1,n2;
    cout<<"Enter 2 Number : ";
    cin>>n2>>n2;


    char op;
    cout<<"Enter a operand: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The sum is: "<<n1 + n2;
        break;
    case '-':
        cout<<"The sub is: "<<n1-n2;
        break;    
    
    case '*':
        cout<<"The mul is: "<<n1*n2;
        break;
    case '/':
        cout<<"The div is: "<<n1/n2;
        break;  

    default:
        cout<<"Please enter a valid operator!😀 ";
        break;
    }

}