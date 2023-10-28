#include<bits/stdc++.h>
using namespace std;


//This will not swap
/* void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
} */


//Call by reference using pointers
void swappPointer(int* a,int* b){
    int temp=*a;
    *a = *b;
    *b = temp;
}


//Call by reference using C++ reference variable
int & swapReferencevar(int &a,int &b){
    int temp=a;
    a = b;
    b = temp;
    return a;
}



int main(){
int x=10,y=13;

cout<<"The value a is "<<x<<" The value b is "<<y<<endl;
//  ---->Call by value  compelxity(O(n)) 

/* swap(x,y);  This will not swap */ 

/* swappPointer(&x,&y);  //  ---->Call by reference using pointers   compelxity(O(1)) 

cout<<"The value a is "<<x<<" The value b is "<<y<<endl; */


swapReferencevar(x,y)=600;  //  ---->This will be swap using reference variable  
cout<<"The value a is "<<x<<" The value b is "<<y<<endl;
     
}