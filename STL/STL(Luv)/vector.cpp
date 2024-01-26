#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    cout<<"Size : "<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
    
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    // display(v);
    // v.pop_back();
    // display(v);

    //copy one vector to another time complexity is o(n)
    vector<int> v2=v;
    v2.push_back(9);
    display(v);
    display(v);
    display(v2);


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/