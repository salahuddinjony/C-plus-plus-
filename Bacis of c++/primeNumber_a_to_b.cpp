#include<iostream>
using namespace std;
int main(){


int a,b,i,num,sum=0;

cout<<"Enter your a & b :";
cin>>a>>b;

for (num =a;num <=b; num++)
{
   for ( i =2; i< num; i++)
   {
       if (num%i==0)
       {
           break;
       }
       
   }

   if (i==num)
   {
       cout<<num<<endl;
       sum+=num;
   }
   
   
   
}
    cout<<"The total sum of a to b prime numbers:"<<sum<<endl;


return 0;

}