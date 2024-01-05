#include<bits/stdc++.h>
using namespace std;

class BankDeposit{
    int principle;
    int year;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();


};

BankDeposit :: BankDeposit(int p, int y, float r){

    principle=p;
    year=y;
    interestRate=r;
    returnValue=principle;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }
    
}
BankDeposit :: BankDeposit(int p, int y, int r){

    principle=p;
    year=y;
    interestRate=float(r)/100;
    returnValue=principle;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }
    
}

void BankDeposit :: show(){
    cout<<"principle ammount was "<<principle<<endl
    <<"Return value after "<<year
    <<" years is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1, bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p y r "<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y R "<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();

return 0;
    
}