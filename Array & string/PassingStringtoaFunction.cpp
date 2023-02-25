#include<bits/stdc++.h>
using namespace std;


void display(char *);
void display(string);

int main(){
    string str;
    char str1[100];
    

    cout<<"Enter a string(str): ";
    getline(cin,str);
 


    cout<<"Enter another string(str1): ";
       cin.get(str1,100,'\n');
    

    display(str);
    display(str1);

    return 0;

 
}

void display(char s[]){
    cout<<"You entered:"<<s<<endl;
}
void display(string s){
    cout<<"You entered:"<<s<<endl;
}

