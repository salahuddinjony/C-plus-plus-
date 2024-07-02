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

int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl; //if its memoroies 2000
    ptr++;
    cout<<ptr<<endl; //then its increase 4 byte cause we use int type and its 4 byte so the memories address is 2004

    int arr[]={10,20,30};
    int *aptr=arr;
    cout<<*aptr<<endl; //same as *arr o/p 10
    cout<<*arr<<endl; // o/p 10

     cout<<"\n"<<endl;
    for (int i = 0; i <3; i++)
    {
        cout<<"The vaule of memory address"<<"["<<aptr<<"] : "<<*aptr<<endl;
        // cout<<*(arr+i)<<endl; //We can also use this , here is indexing number where its going to next index of data not memory addresses
        aptr++;
        // arr+ cant use

    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/