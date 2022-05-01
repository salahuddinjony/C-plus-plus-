#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter your value: ";
    cin>>n;
    while (n>0)
    {
        cout<<"The number is : "<<n<<endl;
        cin>>n;    //when the given number is positive ,again will take input from user 
    }
    
}