#include<iostream>
using namespace std;

int prime(int n);

int main(){

    int num;
    cin>>num;

    int flag=prime(num);
    if (flag==1)
    {
        cout<<"Not prime";
    }
    else{
        cout<<"Prime";
    }
    


}

int prime(int n){
    int i;

    for ( i =2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            return 1;
        }
        
    }
    return 0;
}