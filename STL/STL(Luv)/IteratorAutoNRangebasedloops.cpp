#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,1,4,7,9};

    //Rnage for loop
    for (int &value: v)
    {
       value++;
    }
    for (int value : v)
    {
       cout<<value<<" ";
    }
    
    //vector of pair Range for loop
    cout<<endl;
    vector<pair<int,int>>p={{2,2},{3,3},{4,4}};
    for (pair<int,int> &p_value : p)
    {
        cout<<p_value.first<<" "<<p_value.second<<endl;
    }
    
    //Auto keyword
    cout<<"\n"<<endl;
    for (auto &p_value : p)
    {
        cout<<p_value.first<<" "<<p_value.second<<endl;
    }
    vector<int>vec={1,2,3,4,5,6,7,8};
    for (auto it=vec.begin(); it!=vec.end();it++ )
    {
        cout<<*(it)<<" ";
    }
    
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/