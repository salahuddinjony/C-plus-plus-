#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorail=1;
    for (int i =2; i <=n; i++)
    {
        factorail*=i;
    }
    return factorail;
    
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            int ans=fact(i)/(fact(j)*fact(i-j));  // n!/(r!*(n-r)!)
            cout<<ans<<" ";
        }
        cout<<endl;
        
    }
    

}