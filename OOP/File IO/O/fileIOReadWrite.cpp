#include<iostream>
#include<fstream>
using namespace std;
/* 
These are some useful classes for working with files in C++
    1.fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
   
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
    1. Using the constructor
    2. Using the member function open() of the class

  */

int main(){
    string st="salah uddin";
    string st2;

    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out<<st; //Write to file sample.txt

    // Opening files using constructor and Read it
    ifstream in("sampleb.txt"); // Read operation
    // in>>st2; //its outoput before space string ig. This . And it just like cin
    getline(in,st2);
    cout<<st2<<endl; //Read the file of sample.txt

    return 0;
}
