#include<bits/stdc++.h>
using namespace std;
/*
input:
3
{[()]}
{[(])}
{{[[(())]]}}

output:
YES
NO
YES
*/
//Stack time complexity is  O(N)
unordered_map<char,int>symbol={{'(',-1 } ,{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string isBlanced(string s){
    stack<char>st;
    for(char Bracket : s){
        if(symbol[Bracket]<0){
            st.push(Bracket);
        }else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbol[top]+symbol[Bracket]!=0)return "NO";
        }
    }
    if(st.empty())return "YES";
    return "NO";

}
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
       cout<< isBlanced(s)<<endl;
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/