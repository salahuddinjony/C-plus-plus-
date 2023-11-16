// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions



#include<bits/stdc++.h>
using namespace std;

//Class
class Binary{

    string s;    //private is default access modifier for class members.

    public:
        void read(void);
        void chk_binary(void);
        void once_complenet();
        void display();
};

void Binary::read(void){

    cout<<"Enter a Binary number: ";
    cin>>s;

}
void Binary::chk_binary(void){

    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){

            cout<<"Incorrect binary number"<<endl;
            exit(0); // This is a standard library function used to terminate a program.

        }
    } 
}
void Binary::once_complenet(){

    chk_binary(); ///Nested function

    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
             s.at(i)='0';
        }
    }
}
void Binary::display(){
    cout<<"Displaing the binary number: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }
    cout<<endl;
    
}

int main(){

    Binary b;  //Create object as b of Binary class
    b.read();
    // b.chk_binary();
    b.display();
    b.once_complenet();
    b.display();

return 0;
    
}