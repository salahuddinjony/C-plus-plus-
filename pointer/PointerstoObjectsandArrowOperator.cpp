#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // Complex c1;
    // Complex (*ptr)=&c1;
    Complex (*ptr) = new Complex;
    // (*ptr).setData(2,3); is exactly same as using arrow operator(->)
    ptr->setData(12,3);
    // (*ptr).getData(); is exactly same as using arrow operator(->)
    ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(10, 13); 
    ptr1->getData();
    return 0;

    return 0;
}
