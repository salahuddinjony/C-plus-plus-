#include<iostream>
using namespace std;
int main(){

    int pocketMoney=3000;


    for (int date= 0; date<=30; date++)
    {
        if (date%2==0)
        {
            continue; //if date is even then she can not go out that's means skip the date
        }
        if (pocketMoney==0)
        {
            break; 
        }
        
        pocketMoney=pocketMoney-300;
        cout<<"Go out today!"<<endl;//when date is odd then she go out
    }
    





return 0;

}