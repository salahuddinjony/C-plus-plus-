#include<bits/stdc++.h>
using namespace std;
int main(){

   /*  Pointers are symbolic representations of addresses. 
    They enable programs to simulate call-by-reference as well 
    as to create and manipulate dynamic data structures. Iterating 
    over elements in arrays or other data structures is one of the 
    main use of pointers. 

 */

int a=3;
int* b=&a;
cout<<b<<endl;

// & address of operator


cout<<"The address of a is "<<&a<<endl;  //retuen address of a at b
cout<<"The address of a is "<<b<<endl;   //retuen address of a at b


// *---->(value at) dereference operator
cout<<"The address of a is "<<*b<<endl;  //retuen value of a

//pointer to pointer 

int** c=&b; //pointer to pinter thats why we use two (**) star

cout<<"The address of b is "<<&b<<endl; 
cout<<"The address of b is "<<c<<endl;
cout<<"The value at  address c is "<<*c<<endl;
cout<<"The value at address value_at(value at (c)) "<<**c<<endl;

return 0;
}