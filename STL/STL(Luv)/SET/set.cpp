#include<bits/stdc++.h>
using namespace std;
void display(set<string> &s){
    
    //for(const string &value : s ){
    //for(string value : s ){
    for(auto &value : s ){
        cout<<value<<endl;
    }
    /*
    //also uese iterator
    for (auto it =s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    */
    
}
int main(){
    set<string>s;
    s.insert("abc"); //O(log(n))
    s.insert("ghi");
    s.insert("def");
    s.insert("abc");
   auto it= s.find("abc"); //O(log(n))
   if(it!=s.end()){
    // cout<<(*it)<<"\n"<<endl;
    s.erase(it);
    //s.erase("abc");
   }
   display(s);


    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/