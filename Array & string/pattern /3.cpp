#include<iostream>
using namespace std;
int main(){

    for (int i =1; i<=5; i++) //row
    {
        for (int s =1; s<=5-i; s++)// s=space
            {
                cout<<" ";
            }
            for (int j =1; j <=2*i-1; j++)
            {
                 cout<<"*";
            }
            
        cout<<endl;
        
    }
    

}