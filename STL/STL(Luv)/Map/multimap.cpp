#include<bits/stdc++.h>
using namespace std;
void display(multimap<int,string> &m){

    cout<<"Size: "<<m.size()<<endl;

    for (auto &pr : m) //o(log(n)) loop
    {
        cout<<pr.first<<" "<<pr.second<<endl;
        
    }
}
int main(){
    /*
    Yes, that's correct. Unlike map, multimap does not 
    provide a subscript operator for direct access using square
    brackets ([]).
    
    And multimap are ordered.The ordering is determined by the comparison
    function provided during the creation of the multimap.
    */

    multimap<int,string>m; //store duplicates values 
    m.insert({1,"abc"}); //o(log(n))
    m.insert({5,"def"});
    m.insert({3,"ghi"});
    m.insert({1,"abC"}); //duplicate value allow in multimap
    m.insert({4,"jkl"});
   
   
    display(m);

    
    
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/