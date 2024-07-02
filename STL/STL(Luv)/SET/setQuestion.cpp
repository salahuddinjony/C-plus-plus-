/*
Given N strings.
print unique string in lexiographical order

N<= 10^5
|S| <= 100000

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
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"The output are"<<endl;
    for(auto value : s){
        cout<<value<<endl;
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/