#include<bits/stdc++.h>
using namespace std;
/*
Given N strings and Q queries.
In each query you are given a string
print frequency of that string

N<= 10^6
|S| <= 100
Q<= 10^6

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
*/
/* void display(unordered_map<string,int> &m){
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
} */
int main(){
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1; //count freequency
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    
    
    // display(m);
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/