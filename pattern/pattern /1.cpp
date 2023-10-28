#include<iostream>
using namespace std;
int main(){

    int k=1;
    for (int i = 1; i <=5; i++) //row
    {
        for (int j =1; j <=i; j++) //column
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    

}