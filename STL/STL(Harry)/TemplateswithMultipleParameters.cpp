#include<bits/stdc++.h>

/* 
Syntex of template:
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)

template<class T1, class T2...>(COMMA SEPARATED)
class class_name(){
    //body
}
 */
using namespace std;
template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};
int main(){
    myClass<int ,float> obj(1,2.2);
    obj.display();
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/