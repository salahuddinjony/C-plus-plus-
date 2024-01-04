#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"kemon acho?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:

    //Ambiguity 
    void greet(){
        Base1 :: greet();
    }
    
        
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    public:
        void say(){
                cout<<"Hello beautiful world"<<endl;
            }
    
};

int main(){
    Base1 objbase1;
    Base2 objbase2;
    objbase1.greet();
    objbase2.greet();
    Derived d;
    d.greet();
    D di;
    di.say(); //print out the "Hello beautiful world" 


return 0;
    
}