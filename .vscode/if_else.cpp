#include<iostream>
using namespace std;
int main(){

    int savings ;
    cin>>savings;


    if(savings>5000){

        if (savings>10000)
        {
            cout<<"Go to dating with Omi";
        }

        else{
            cout<<"Go to roadtrip with omi"; 
        }

    }   else if (savings>3000){
            cout<<"Go to librey to buy some books"; 

        }else{
            cout<<"Go to friends";
        }
        
    



    return 0;

}