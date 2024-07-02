#include<bits/stdc++.h>
using namespace std;

//Write and read same file 
int main(){

    // Connecting our file with out stream
    ofstream out("sample.txt");
    string st;

    // Creating a name string and filling it with the string entered by the
    cout<<"Enter your name: ";
    cin>>st;
    // Writing a string to the file
    out<<"My name is " + st;
    out.close();   //After write then close the file 

    ifstream in("sample.txt"); //After write then close the file and then we can read the same file
    string st2;
    getline(in,st2);
    cout<<st2<<endl;
    in.close();
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/