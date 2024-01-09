#include<bits/stdc++.h>
using namespace std;

/* 

My Rules of understanding pointers:-
    '&'             -  this will return an address of any variable or things.
    '*'             -  this will dereference an address
    'int *'         -  this will make a pointer variable
    'variable_name' -  this will return value of a 'variable_name' 
Example:-
   swap(a,b) - Call by value
   swap(&a,&b) - Call by reference

*/

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