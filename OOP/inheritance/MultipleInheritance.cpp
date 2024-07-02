#include<bits/stdc++.h>
using namespace std;


// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base1{
    protected:
        int intBase1;
    public:
        void set_intbase1(int a){
            intBase1=a;
        }


};
class Base2{
    protected:
        int intBase2;
    public:
        void set_intbase2(int a){
            intBase2=a;
        }


};
class Base3{
    protected:
        int intBase3;
    public:
        void set_intbase3(int a){
            intBase3=a;
        }


};
//Miltiple inheriting 
class Derived : public Base1, public Base2, public Base3{

    public:
        void show(){
            cout<<"The value of intbase1 is : "<<intBase1<<endl;
            cout<<"The value of intbase2 is : "<<intBase2<<endl;
            cout<<"The value of intbase3 is : "<<intBase3<<endl;
            cout<<"The result of intbase1 , intbase2 and intbase3 is : "<<intBase1+intBase2+intBase3<<endl;

        }
};

/*
The inherited derived class will look something like this:
Data members:
Base1int--› protected
Base2int --› protected
Member functions:
set_baselint() --› public set_base2int) =-› public
set_show() - -› public


*/
int main(){

    Derived salah;
    salah.set_intbase1(24);
    salah.set_intbase2(6);
    salah.set_intbase3(10);
    salah.show();



return 0;
    
}