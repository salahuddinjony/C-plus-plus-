#include<bits/stdc++.h>
using namespace std;
class simple{
    int data1;
    int data2;
    int data3;
    public:
        simple(int a , int b=9, int c=2){
            data1=a;
            data2=b;
            data3=c;

        }
        void printData();

};
void simple :: printData(){
    cout<<"The value of data is "<<data1<<" ,  "<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s(1);
    s.printData();


return 0;
    
}