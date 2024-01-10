#include<bits/stdc++.h>
using namespace std;
What is pointer?
-->Pointers are variables that store 


void exchange(int *x,int *y){ //point the addresses of a and b with x and y
    int temp=*x;
    *x = *y;
    *y=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<"\nBefore exchange:"<<endl
    <<"a = "<<a<<endl
    <<"b = "<<b<<endl;
    
    // We can use also this:

    /* int *aptr=&a; 
    int *bptr=&b;
    exchange(aptr,bptr); */

    exchange(&a,&b); //Call by refference
    cout<<"\nAfter exchange:"<<endl
    <<"a = "<<a<<endl
    <<"b = "<<b<<endl;

return 0;
    
}