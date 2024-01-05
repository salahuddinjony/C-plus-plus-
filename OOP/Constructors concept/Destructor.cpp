/* 

A destructor is a type of function which is called when the object is
destroyed. Destructor never takes an argument nor does it return any value.
An example program to demonstrate the concept of destructors in C++ is 
shown below.

*/

#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int cnt=0;

class num{

    public:
        num(){
            cnt++;
            cout<<"This is the time when constructor is called for object number "<<cnt<<endl;
        }

        ~num(){    //destructor using tilled sign
            cout<<"This is the time when my destructor is called for object number "<<cnt<<endl;
            cnt--;
        }
};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
