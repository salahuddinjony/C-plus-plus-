#include<bits/stdc++.h>
using namespace std;

int fibo(int n);
int main(){
    int n;
    cin>>n;
    int nth=fibo(n);
    cout<<nth<<endl;

}
int fibo(int z){

    if(z==1)
    return 0;
    else if (z==1 or z==2)
    {
        return 1;
    }
    else
    return fibo(z-1)+fibo(z-2);
    


}