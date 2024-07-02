#include<bits/stdc++.h>
using namespace std;
 //default arguments assign
template <class T1=int, class T2=float, class T3=char>

class salah{
    public:
        T1 a;
        T2 b;
        T3 c;
        salah(T1 x,T2 y, T3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The value a : "<<a<<endl;
            cout<<"The value b : "<<b<<endl;
            cout<<"The value c : "<<c<<endl;
        }
};
int main(){
    //default parameteres
    salah < >obj(2,3.3,'A');
    obj.display();
    
    cout<<"\n";

    salah <float,char,char >obj2(3.3,'C', 'B');
    obj2.display();
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/