#include<iostream>
using namespace std;
int main(){

    cout<<"Enter your value: ";
    int n;
    cin>>n;

    do
    {
        cout<<"The number is : "<<n<<endl;  //Before check the number is positive or negative print the n number 
        cin>>n;
    } while (n>0);
    


    return 0;
}
