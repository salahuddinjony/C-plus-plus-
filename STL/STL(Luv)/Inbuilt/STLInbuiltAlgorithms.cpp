#include<bits/stdc++.h>
using namespace std;
/*
6
1 4 1 6 4 7
*/
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    cout<<"The vector is:"<<endl;
    sort(v.begin(),v.end());
    for (auto &val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //All are time complexity is O(n)
    int min= *min_element(v.begin()+2,v.end());
    cout<<min<<endl;
    int max= *max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int cnt=count(v.begin(),v.end(),1);//count the number of 1's how time's present
    cout<<cnt<<endl;
    auto it=find(v.begin(),v.end(),1);
    if(it!=v.end()){
        cout<<*it<<endl;
    }else cout<<"Element not found!";
    cout<<"After reverse:"<<endl;
    reverse(v.begin(),v.end());
    for(auto &Rval: v){
        cout<<Rval<<" ";
    }
    cout<<endl;
    string s="salah uddin";
    cout<<s<<endl;
    reverse(s.begin()+1,s.end());
    cout<<s<<endl;


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/