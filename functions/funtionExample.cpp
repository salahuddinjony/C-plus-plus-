#include<bits/stdc++.h>
using namespace std;

void print(int num){
    cout<<"The number is: "<<num<<endl;
}

int add(int num1,int num2){
    print(num1);
    print(num2);
    cout<<"The sum is:";
    int sum=num1+num2;
    return sum;
}

int main(){
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
}