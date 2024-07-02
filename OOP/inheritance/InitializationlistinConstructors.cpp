#include <bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i),b(j){
    // Test(int i, int j) : a(i),b(i+j){
    // Test(int i, int j) : a(i),b(2 * j){
    //  Test(int i, int j) : a(i),b(a + j){
    //  Test(int i, int j) : b(j),a( i+ b){ --> Red flag this will create problems because a will be initialized first then b
  
     Test(int i, int j) : a(i),b(j){
         cout<<"Constructor executed"<<endl;
         cout<<"The value of a is "<<a<<endl;
         cout<<"The value of b is "<<b<<endl;
     }

    /*    Test(int i, int j) : a(i){
           b=j;
           cout<<"Constructor executed"<<endl;
           cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
       } */

    /* Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    } */
};

int main()
{
    Test b(2, 3);

    return 0;
}