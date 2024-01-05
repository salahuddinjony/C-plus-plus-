#include<bits/stdc++.h>
using namespace std;
/// @brief 
/// @return 
int main()
{
   int num,flag;
   cout<<"Enter a number greater than one:  "<<endl;
   cin>>num;
   for (int i =2; i <num; i++)
   {
   if(num%i==0){
    flag=0;
    break;
   }
   else{
    flag=1;
   }
   }

   if(flag==1){
    cout<<"prime"<<endl;
   }
   else{
    cout<<"Not prime"<<endl;
   }


}