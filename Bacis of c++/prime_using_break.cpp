#include<iostream>
using namespace std;
int main(){

int n;
int i;
cout<<"Enter your value: ";
cin>>n;
for ( i = 2; i < n; i++)
{
    if (n%i==0)
    {
       cout<<"Not prime"<<endl;
       break;
    }  
}

if (n==i)
{
    cout<<"Prime"<<endl;
}
else{
    cout<<"Not prime"<<endl;
}


return 0;

}