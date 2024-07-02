#include<iostream>
using namespace std;

int main(){

    char c;

    char lower_case,upper_case;

    cout<<"Enter an Alphabet: ";

    cin>>c;

    lower_case= (c =='a'|| c =='e'||c =='i'||c =='o'||c =='u');
    upper_case= (c =='A'||c =='E'||c =='I'||c =='O'||c =='U');

    if (lower_case || upper_case)
    {
        cout<<c<<"  is an vowel";
    }
    else{
        cout<<c<<"  is a consonent ";
    }
    return 0;
}