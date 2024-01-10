#include<bits/stdc++.h>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void Display(){
            cout<<"Displaying Base class variable of var_base: "<<var_base<<endl;
        }
    
};
class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void Display(){
            cout<<"Displaying Base class variable of var_base: "<<var_base<<endl;
            cout<<"Displaying Derived class variable of  var_derived: "<<var_derived<<endl;
        }

};
int main(){
    BaseClass *base_class_pointer; // its point the BaseClass object
    BaseClass obj_base;
    DerivedClass obj_derived;
    
    base_class_pointer=&obj_derived; //Pointing base class pointer to derived class
    base_class_pointer->var_base=34;
    //base_class_pointer-›var_derived= 134; i/ Will throw an error
    base_class_pointer->Display(); //Here call 1st BaseClass function of Display() cause we point BaseClass and its called latebinding

    DerivedClass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=3400;
    derived_class_pointer->var_base=3700;
    derived_class_pointer->Display();



    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/