#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[7]={2,3,0,1,5,7,4};
    sort(a+1,a+7);
    for (int i = 0; i <7; i++)
    {
        cout<<a[i]<<" ";
    }
    vector<int>v={4,3,1};

    sort(v.begin(), v.end()); //sort complexity is nlog(n)
    cout<<"\nThe vector is :"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/