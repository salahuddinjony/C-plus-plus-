#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int* ptr= &a;
    *ptr=999;
    cout<<"The value of a "<<*(ptr)<<endl; //output->999

    //new operator 
    int *p=new int(40); //involves dynamic memory allocation using the new operator.
    cout<<"The value of p "<<*(p)<<endl; //output->40

    float *c=new float(89.78);
     cout<<"The value of c "<<*(c)<<endl; //output->89.78

     int *arr=new int[3];  //dynamically allocated array size of 3
     arr[0]=10;
     arr[1]=20;
     arr[2]=30;
     //delete operator
     delete [] arr; //dynamically allocated memory deleted, free the memory when done using it
      cout<<"The value of a[0] "<<arr[0]<<endl;
      cout<<"The value of a[1] "<<arr[1]<<endl;
      cout<<"The value of a[2] "<<arr[2]<<endl;
     


return 0;
    
}