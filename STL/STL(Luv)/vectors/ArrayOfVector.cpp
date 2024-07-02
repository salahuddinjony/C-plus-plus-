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
    int N;
    cin>>N;
    vector<int>v[N]; //N number of vector here

    for (int i = 0; i <N; i++)
    {
        int n;
        cin>>n; //i th vrctor elements number
        for (int j = 0; j <n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i <N; i++)
    {
        display(v[i]);
    }
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/