#include<bits/stdc++.h>
using namespace std;
// This code is important for understanding ponters and referrence
template <class T>

void swaap(T &a, T &b){ //call by referrence and directly modifying the values
    int temp=a;
        a=b;
        b=temp;

}

/* 
void swaap(T *a, T *b){ //call by pinter by using call swaap(&x,&y); and manipulates the values indirectly through memory addresses
    int temp=*a; // here * is deferrence the value
        *a=*b;
        *b=temp;

}
 */

int main(){
    int x=3;
    int y=5;
    cout<<"Before swap:\n"<<"The value of x: "<<x<<endl<<"The value of y: "<<y<<endl;

    swaap(x,y);
    // swaap(&x,&y);
    cout<<"\nThe value of x: "<<x<<endl<<"The value of y: "<<y<<endl;
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/