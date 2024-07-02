/*
Given N strings, print unique strings
in lexiographical order with their frequency
N <= 10^5
|S｜＜=100

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
output:
abc 3
def 1
ghj 3
jkl 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        string s;
        cin>>s;
        // m[s]++;
        m[s]=m[s]+1; //m[s] in the 1st time here no correspondig value that's why return 0 so (map(key,valye))m[abc]=0+1
    }
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/