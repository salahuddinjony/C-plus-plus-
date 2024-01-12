#include<bits/stdc++.h>
using namespace std;
int main(){

    int marks[4]={40,45,50,55};

    int *p=marks; //for pointer array

    cout<<"The value of marks[0]= "<<*p<<endl;
     cout<<"The value of marks[0]= "<<*(p+1)<<endl;
}