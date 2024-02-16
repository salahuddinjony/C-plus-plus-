#include<bits/stdc++.h>
using namespace std;
/*
3
4 1
4 3
5 7
*/
/*
bool Should_iSwap(pair<int,int>a , pair<int,int>b){
    if(a.first!=b.first){
        if(a.first>b.first) return true;  //ascending order
        return false;
    }else{
        if(a.second<b.second) return true; //descending order
        return false;
    }
    
}
//This is for Should_iSwap comparator
bool Should_iSwap(pair<int,int>a , pair<int,int>b){
    if(a.first!=b.first){
        if(a.first>b.first) return false;  //ascending order
        return true;
    }else{
        if(a.second<b.second) return false; //descending order
        return true;
    }
    
}
*/

bool cmp(pair<int,int>a , pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first; //ascending order
    }
    return a.second>b.second; //ascending order

    
}
int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> p(n);
    for (int i = 0; i <n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end(),cmp); //inbuilt swap function want swap return false but usually want to swap return true
    
    /* for (int i = 0; i < n; i++)
    {
       for (int j =i+1; j <n; j++)
       {
        if(Should_iSwap(p[i],p[j])){
            swap(p[i],p[j]);
        }
       }
       
    } */
    cout<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/