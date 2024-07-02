#include<bits/stdc++.h>
using namespace std;
class Data2;

class Data1{
    int data1;
    friend void Exchange(Data1 &x, Data2 &y);// frind function
    public:
        void setData(int a){
            data1=a;
        }
        void Display(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Data2{
    int data2;
    friend void Exchange(Data1 &x, Data2 &y); // frind function
    public:
        void setData(int b){
            data2=b;
        }
        void Display(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

void Exchange(Data1 &x ,Data2 &y){ //call by refference
    int temp =x.data1;
    x.data1 =y.data2;
    y.data2=temp;
    
}
int main(){
    cout<<"\n";
    Data1 obj1;
    obj1.setData(10);
    obj1.Display();


    Data2 obj2;
    obj2.setData(20);
    obj2.Display();

    Exchange(obj1,obj2);
    cout<<"\nAfter exchanging: "<<endl;
    obj1.Display();
    obj2.Display();

return 0;
    
}