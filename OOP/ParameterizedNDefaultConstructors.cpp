#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(int x,int y);
        void printNumber(void){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }



};
Complex :: Complex(int x, int y){  //This is a perameterized constructor as it accept 2 parameters
    a=x;
    b=y;
}
int main(){

    // Impicit call
    Complex c1(2,3);
    c1.printNumber();

    //Explicit call
    Complex c2=Complex(7,8);
    c2.printNumber();

return 0;
    
}