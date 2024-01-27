#include<bits/stdc++.h>
using namespace std;
//Map is an associative array 
// map::insert({key, element}) 
// map(key, element) 

int main(){
    map<string,int> marksMap;
    marksMap["salah"]=30;
    marksMap["Rakin"]=40;
    marksMap["Sakin"]=50;
    marksMap["Doha"]=440;
    marksMap.insert({"Kozume", 169});
    marksMap.insert({"Coree", 100});

    // map<string, int> :: iterator iter;
    // for ( iter=marksMap.begin(); iter!=marksMap.end() ; iter++)
    // {
    for (auto iter=marksMap.begin(); iter!=marksMap.end() ; iter++) //We can use also auto for instance of obj using scope resulations
    {
        cout<<(*iter).first<<" \t" <<(*iter).second<<endl;
    }
    

    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/