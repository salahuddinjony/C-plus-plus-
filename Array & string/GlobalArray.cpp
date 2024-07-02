#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N][N];

//Array have no need to pass by reference its auto accept by reference so we can pass by value in the array to change anything
void change(int arr[]){
    arr[0]=0;
}

void func(){
    a[0][0]=5;
}

int main(){
    int arra[10];
    arra[0]=9;
    cout<<arra[0]<<endl;
    change(arra);
    cout<<arra[0]<<endl;

    a[0][0]=7;//Global array
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/
