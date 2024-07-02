/*
Given N strings and Q queries.
In each query you are given a string
print yes if string is present
else print no.
7 N <= 10^6
IS| <= 100
Q <= 10 ^ 6

input: 
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
def

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    // there is no need to order that's why we use unordered_set 
    // cause its time complexity is O(1)
    unordered_set<string>s;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
       string str;
       cin>>str;
       s.insert(str); //O(1)
    }
    int q;
    cin>>q;
    while (q--)
    {
       string qstr;
       cin>>qstr;
       if(s.find(qstr) == s.end()){ //O(1) its show when itetarator not find and iterator goes at end()
        cout<<"NO\n";
       }else{
        cout<<"YES\n";
       }

    }
    
    
    


    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/