#include<bits/stdc++.h>
using namespace std;
void display(unordered_set<string> &s){
    
    for(string value : s ){
        cout<<value<<endl;
    }
    
    
}
// 1. inbuilt implementation---> Use hash table to implement unordered_set
// 2. Time complexity-->O(1)
// 3. valid keys datatype dont use complex datatypes ,like-->  unordered_set<set<int>>s;


int main(){
    unordered_set<string>s;
    s.insert("abc"); //O(1)
    s.insert("ghi");
    s.insert("def");
    s.insert("abc");
    /*
    auto it= s.find("abc"); //O(1)
    if(it!=s.end()){
    // cout<<(*it)<<"\n"<<endl;
    s.erase(it);
    //s.erase("abc");
   } 
   */
   display(s);


    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/