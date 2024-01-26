#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,1,4,7,9};
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    vector<int> :: iterator it;
    cout<<"Use iterator: ";
    for (it=v.begin(); it!=v.end(); it++)
    {
       cout<<*(it)<<" ";
    }

    cout<<endl;
    vector<pair<int,int>>p_v={{1,2},{2,4},{5,6}};

    vector<pair<int,int>> :: iterator p_it;
    for (p_it=p_v.begin(); p_it!=p_v.end(); p_it++)
    {
        cout<<p_it->first<<" "<<p_it->second<<endl; 
        // (*it).first <=> (it-›first) same
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/