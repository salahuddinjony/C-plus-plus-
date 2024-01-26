#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    cout<<"\nsize: "<<v.size()<<endl;
    
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector< vector<int> >v;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int>temp; 
        //v.push_back(vector<int>());
        for (int j = 0; j <n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x); //(for vector<int>temp;)->store an element to temp vector
            v[i].push_back(x); //if we use v.push_back(vector<int>());
        }
        v.push_back(temp); //store a vector to v vector
        
    }
    for (int i = 0; i <v.size(); i++)
    {
        display(v[i]);
    }
    cout<<v[0][1]; //v[0] is a vector and [1] is a 0th posion of v vector's vector
    
    

    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/