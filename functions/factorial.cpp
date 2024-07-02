#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int factorial=1;
    for (int i =1; i <=num; i++)
    {
        factorial*=i;
    }
    return factorial;
    
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    int resutl=fact(n);
    cout<<"The factorial "<<n<<"! is : "<<resutl<<endl;




}