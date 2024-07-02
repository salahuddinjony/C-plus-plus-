#include<bits/stdc++.h>
using namespace std;
/*
6
4 5 5 25 7 8
*/
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end()); //Must be sorted the vector before find lower and upper bound
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto Lowerit=lower_bound(v.begin(),v.end(),8);
    auto Upperit=upper_bound(v.begin(),v.end(),26);
    if(Lowerit==v.end()){
        cout<<"Lower bound,not found!"<<endl;
    }e   lse cout<<(*Lowerit)<<endl;
    if(Upperit==v.end()){
        cout<<"Upper bound,not found!"<<endl;
    }else cout<<(*Upperit)<<endl;
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/