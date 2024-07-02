#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    mam<int,int>m;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       s.insert(x);
    }
    //set is by defult sort so no need to be sorted the set
    // auto it=lower_bound(s.begin(),s.end(),3); //Exceed time limit, TC O(n)
    auto Lit=s.lower_bound(3); 
    auto Uit=s.upper_bound(2);
    if(Lit==s.end()){
        cout<<"Lower bound,not found!"<<endl;
    }else cout<<(*Lit)<<endl;
    if(Uit==s.end()){
        cout<<"Upper bound,not found!"<<endl;
    }else cout<<(*Uit)<<endl;


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/