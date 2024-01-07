#include<bits/stdc++.h>
using namespace std;
class ShopItem{
    int id;
    int price;
    public:
        void set_Data(int a , int b){
            id=a;
            price=b;
        }
        void get_Data(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }

};

int main(){
    int size=3,p,i;
    float q;
    ShopItem *ptr =new ShopItem[size]; //its point 0-2 obj of ptr by increse in for loop
    ShopItem *prtTemp=ptr;  //its in the beginning point  0 index of ptr obj memory address

    for ( i = 0; i < size; i++)
    {
        cout<<"Enter your Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        (*ptr).set_Data(p,q);
        ptr++; //increses the obj of ptr memory locations
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        prtTemp->get_Data(); //Using arrow operator but we also use (ptrTemp).get_Data()
        prtTemp++;
    }
    
    


return 0;
    
}

/*
This code absolutely awesome for understanding pointer and arra 
of object
I'm really impress of this code  
*/