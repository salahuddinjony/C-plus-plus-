#include<iostream>
using namespace std;

void prime(){

    int n,i,flag=0;
    cin>>n;

    if (n<=1)
    {
      cout<<"Not prime"<<endl;  
    }
    else{
    for (i =2; i<=n/2; i++) ///we can use also i<n condition  
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
       cout<<"Not prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }

    }
    
    
}

int main(){
    prime();
}