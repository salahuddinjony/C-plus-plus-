#include<bits/stdc++.h>
using namespace std;


/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1{
    int data1;
    public:
        Base1(int r){
            data1=r;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatabase1(){
            cout<<"The value of base1 "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int r){
            data2=r;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdatabase2(){
            cout<<"The value of base2 "<<data2<<endl;
        }
};

//constuctor derived
class Derived : public Base1, public Base2{
    int derived1;
    int derived2;
    public:

    //Derived constructor in inheritance
        Derived(int a,int b,int c,int d) : Base1(a) ,Base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printdataderived(){
            cout<<"The value of derived1 "<<derived1<<endl;
            cout<<"The value of derived2 "<<derived2<<endl;
        }
};

int main(){
    Derived salah(1,2,3,4);
    salah.printdatabase1();
    salah.printdatabase2();
    salah.printdataderived();
   


return 0;
    
}