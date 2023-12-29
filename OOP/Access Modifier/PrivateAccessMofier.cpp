#include<bits/stdc++.h>
using namespace std;

class Money{

    private:
        int tk, ps;
    public:
        int d,r;

        void ConvertMoney(int a,int b);  //Declaration
        void ReadMoney(){
            cout<<"The tk is "<<tk<<endl;
            cout<<"The ps is "<<ps<<endl;
            cout<<"The d is "<<d<<endl;
            cout<<"The r is "<<r<<endl;
           
        }
};

//Private access modifiers

//Define
void Money :: ConvertMoney(int a , int b){  //  ---->:: this is scope resulation
    tk=a;
    ps=b;
}

int main(){
    Money Cash;
    Cash.d=20;
    Cash.r=40;
    Cash.ConvertMoney(200,30);
    Cash.ReadMoney();

return 0;
    
}