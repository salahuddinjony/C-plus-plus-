#include<bits/stdc++.h>
using namespace std;
/*
input:
3
a b 3
1 2 3
e f 4
1 2 3 4
c d 2
1 2

output:
a b { 1  2  3 }
c d { 1  2 }
e f { 1  2  3  4 }
*/

void display(map<pair<string, string>,vector<int>> &m){

    for (auto &pr: m)
    {
        auto &full_name=pr.first;
        cout<<full_name.first<<" "<<full_name.second<<" ";
        auto &marks=pr.second;
        cout<<"{";
        for (auto &vmarks : marks)
        {
            cout<<" "<<vmarks<<" ";
        }
        cout<<"}"<<endl;
        
    }
}
int main(){
    map<pair<string, string>,vector<int>>m;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
       string fn,ln;
       int cntMark;
       cin>>fn>>ln>>cntMark;
       for (int j = 0; j <cntMark; j++)
       {
        int marks;
        cin>>marks;
        m[{fn,ln}].push_back(marks);
       }
       
    }
    display(m);
    
    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/