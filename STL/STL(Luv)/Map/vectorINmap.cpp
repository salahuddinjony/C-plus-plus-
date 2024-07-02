#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, vector<string>>m;
    m[1]={"salah","Rakin","sakin","Toha","Hena"};
    m[0]={"Toki","Tasnim","sabit"};
    m[2]={"sa","Ra","san","oha","Hna"};


    for (auto &entry : m)
    {
        int key=entry.first;
        // vector<string>& values = entry.second;
        auto &values=entry.second;
        cout<<"key: "<<key<<" "<<"Values: ";
        for(auto vec :values){
            cout<<vec<<" ";
        }
        cout<<endl;
    }
    







   /*  // Accessing the key and value separately
    auto it=m.begin();
    auto vit=it->second;

    // Print the key
    cout<<it->first<<" ";

     // Print the values in the vector
    for (auto vec :vit)
    {
       cout<<vec<<" "; 
    } */
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/