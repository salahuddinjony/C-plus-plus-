#include<bits/stdc++.h>
using namespace std;

void display(unordered_map<int,string> &m){
    cout<<"Size:"<<m.size()<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}
// 1. inbuilt implementation---> Use hash table
// 2. Time complexity-->O(1)
// 3. valid keys datatype don't use complex datatypes ,like-->  unordered_map<vector<int>,string>m;

int main(){
    unordered_map<int,string>m;
    m[4]="abc"; //O(1) for insertion using hash table
    m[1]="def";
    m[2]="ghi";
    m[5]="jkl";
    
    auto it=m.find(7); //O(1) its point itarator
    if(it!=m.end()){
    m.erase(4); //O(log(1))  also use key value
    m.erase(it); //O(log(1)) 
    }
    
    display(m);



    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/