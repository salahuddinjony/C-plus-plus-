#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass* base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;
    base_class_pointer=&derived_obj;
    base_class_pointer->display();
   



    return 0;
}




/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/