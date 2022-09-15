#include<iostream>
#include<string>
using namespace std;
// A simple C++ program to generate all rotations
// of a given string

void stringRotated(string s){ //Create a function

    int k,j;
    int len=s.length();
    char temp[len];
    for (int i = 0; i <len; i++)
    {
        k=0;
        j=i;
        while (s[j]!='\0')
        {
            temp[k]=s[j]; 
            k++;
            j++;
        }
        j=0;
        while (j<i)
        {
            temp[k]=s[j];
            j++;
            k++;
            
        }

        cout<<temp<<endl;
        
        


    }
    
}

int main(){
    string s;
    cout<<"Enter your string: ";
    cin>>s;
    stringRotated(s);
    return 0;

}