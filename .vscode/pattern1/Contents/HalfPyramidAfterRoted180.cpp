#include<iostream>
using namespace std;
int main(){

    int row,col,space,n;
    cout<<"Enter N:  ";
    cin>>n;

    for ( row = 1; row <= n; row++)
    {
        for ( space =1; space <=n-row; space++)
        {
            cout<<"  ";
   
        }
        for (col  = 1; col <=2*row-1; col++)
            {
                cout<<"*";
            }

        cout<<endl;
        
    }
    




    return 0;

}