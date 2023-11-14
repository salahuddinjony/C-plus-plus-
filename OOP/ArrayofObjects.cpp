#include<bits/stdc++.h>
using namespace std;


class Employee{

    int id;
    int salary;

    public:

    void setId(void){
        salary=120;
        cout<<"Enter your id "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"Your id is "<<id<<endl; 
    }

};
int main(){

    Employee Explore[100]; //array of object 

    for (int i = 0; i <4; i++)
    {
       Explore[i].setId();
       Explore[i].getId();
    }
    


return 0;
    
}