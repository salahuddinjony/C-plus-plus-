#include<bits/stdc++.h>
using namespace std;
void display(map<int,string> &m){

    cout<<"Size: "<<m.size()<<endl;

    for (auto &pr : m) //o(log(n)) loop
    {
        cout<<pr.first<<" "<<pr.second<<endl;
        
    }
}
int main(){
    map<int,string>m; //default maintain ascending order , map is unigue key map[key,value]
    m[1]="abc"; //o(log(n))
    m[5]="def";
    m[3]="ghi";
    m[1]="abC"; //update before value not add duplicate
    m[2];//show 2 0
    m.insert({4,"jkl"});
   // m ["abcd"] = 1; // s.szie() * log (n)

    cout<<"find and erase operations:"<<endl;

    auto it=m.find(7); //O(log(n)) its point itarator
   
    if(it!=m.end()){
    m.erase(4); //O(log(n))  also use key value
    m.erase(it); //O(log(n)) 
    }
    if(it==m.end()){
        cout<<"No value"<<endl;
    }else{
        cout<<it->first<<" "<<it->second<<endl;
    }
    // m.clear();
    cout<<"\n";
   /*  
   map<int,string> :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    } 
    */
    display(m);

    
    
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/