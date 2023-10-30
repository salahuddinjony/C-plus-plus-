#include<iostream>
using namespace std;

 //Class Name of Employee
class Employee{ 

    private:
        int a,b,c;  //Memeber variables

    public:
        int d, e;
        
        void SetData(int a1 , int b1 , int c1); //declaration //Memeber functions
        void GetData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
        
    }

};

//Private access modifiers

//Define
void Employee :: SetData(int a1 , int b1 , int c1 ){  
    a=a1;
    b=b1;
    c=c1;

}
int main(){

    Employee salah;  //Create object as salah of class Employee

// salah.a = 134; -->This will throw error as a is private
    salah.d=23;
    salah.e=10;
    salah.SetData(1,2,3);
    salah.GetData();
return 0;
    
}