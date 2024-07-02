#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:

    // A & setData(int a) //call by referrence
    void setData(int a)
    {
        //(*this).a=a;
        this->a = a; // this is a keyword of cpp
        // return *this; //Derefference this keyword
    }
    void Display()
    {
        cout << "The value is : " << a << endl;
    }
};

// this is a keyword which is a pointer which points to the object
// which invokes the member function    

int main()
{

    A a;
    // a.setData(4).Display(); //setdata() works as object of A class
    a.setData(4);
    a.Display();
    

    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/
