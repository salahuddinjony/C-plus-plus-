#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your value: ";
    cin>>n;
    int sum=0;

    for(int count=0;count<=n;count++){

        sum=sum+count;
    }

    cout<<"The sum is: "<<sum<<endl;

    return 0; 
}