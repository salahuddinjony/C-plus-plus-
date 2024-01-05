#include<iostream>
using namespace std;


int add(int a, int b){

    return (a+b);
}

int main(){
    int sum;

    sum=add(100,75);
    cout<<"100 + 75 = "<<sum<<endl;
}