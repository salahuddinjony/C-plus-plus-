#include<bits/stdc++.h>
using namespace std;

void display(multiset<string> &s){
    
    for(auto &value : s ){
        cout<<value<<endl;
    }
    
}
// multiset allowed duplicate values and its ordered
int main(){
    multiset<string>s;
    s.insert("abc"); //O(log(n))
    s.insert("ghi");
    s.insert("def");
    s.insert("abc");

    /*
    auto it= s.find("abc"); //O(log(n)) its iterate the first duplicate value
    if(it!=s.end()){
    // cout<<(*it)<<"\n"<<endl;
    s.erase(it);
    s.erase("abc"); //delete all matched duplicates values
    } 
   */
    display(s);


    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/