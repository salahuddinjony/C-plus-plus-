#include<bits/stdc++.h>
using namespace std;

bool pythogorean(int x,int y,int z){
    int a,b,c; 
    a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if (a==y)
    {
       b=x;
       c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
   if(pythogorean(x,y,z)){
       cout<<"pythagorean triplet"<<endl;
   }
   else{
       cout<<"Not pythagorean triplet"<<endl;
   }

}