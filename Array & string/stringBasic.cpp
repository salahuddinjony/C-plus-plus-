#include<bits/stdc++.h>
using namespace std;
int main(){
/*     string s1="salah";
    string s2="salah";
    string s;
    getline(cin,s); //input multiple stirng at included white space
    s1[2]='A';
    cout<<s1[0]<<endl;
    cout<<s1+s2<<endl;
    cout<<s1.size()<<endl;
    cout<<s<<endl;
    if(s1==s2){
        cout<<"Egual"<<endl;
    }else{
        cout<<"Not equal"<<endl;
    } */
    
    /*
    3
    Hi!
    How are you?
    Where are you going ? 
    */

    /*
    int t;
    cin>>t;
    cin.ignore(); //its work normal cin thats means getline go to next line to get input
    while (t--)
    {
        string s;
        getline(cin,s);
        cout<<s<<endl;

    }

     */

    //Reverse a string but its too need time thats menas time complexity is too high

   /*  
    string str;
    string str_reverse;
    cin>>str;
    for (int i = str.size()-1; i>=0; i--)
    {
        str_reverse=str_reverse+str[i];
    }
    cout<<str_reverse<<endl; 
    */
    

    //Ulternative way to reveser a string (Less time complexity)

    string str;
    string str_reverse;
    cin>>str;
    for (int i = str.size()-1; i>=0; i--)
    {
        str_reverse.push_back(str[i]); //Use push_back then need less time complexity
    }
    //push_back time complexity is O(1)
    cout<<str_reverse<<endl;



    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/