#include<iostream>
#include<stdint.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter a string: ";
    cin>>s;
     // Find position of ':' using find()
    int pos=s.find("a");
     // Copy substring before pos
    string sub=s.substr(0,pos-1);
     // Copy substring after pos
    string sub1=s.substr(pos+1);
     // prints the result
    cout<<sub+sub1<<endl;
}