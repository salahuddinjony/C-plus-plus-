#include<bits/stdc++.h>
using namespace std;
template<class T>
class Salah{
    public:
        T data;
        Salah(T a ){
            data=a;
        }
        void display();
};
template <class T>
void Salah<T> :: display(){
    cout<<data<<endl;
}
void Func(int a){
    cout<<"I am first Func() "<<a<<endl;
}

template <class T>
void Func(T a){
    cout<<"I am templatised Func() "<<a<<endl;
}
template <class T>
void Func1(T a){
    cout<<"I am templatised Func() "<<a<<endl;
}
int main(){
    // Salah<int > S(5);
    // Salah<char > S('C');
    // Salah<float > S(5.5);
    // cout<<S.data<<endl;
    // S.display();
    Func(4); //Exact match takes the highest priority
    Func1(4); //Exact match takes the highest priority
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/