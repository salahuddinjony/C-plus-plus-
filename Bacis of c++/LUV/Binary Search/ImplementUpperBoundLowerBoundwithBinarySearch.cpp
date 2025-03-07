#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int lower_bound(vector<int>&v, int element){
    int lo=0, hi=v.size()-1;
    int mid;
    while (hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]<element){
            lo=mid+1;
        }else{ 
            hi=mid;
        }
    }
    if(v[lo]>=element){
        return lo;
    }
    else if (v[hi]>=element)
    {
        return hi;
    }
    else return -1; 
}

int upper_bound(vector<int>&v, int element){
    int lo=0, hi=v.size();
    int mid;
    while (hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }else{ 
            hi=mid;
        }
    }
    if(v[lo]>element){
        return lo;
    }
    else if (v[hi]>element)
    {
        return hi;
    }
    else return -1;

    
}

int main() {
    optimize();
    
   int n;
   cin>>n;
   vector<int>v(n);
   for (int i = 0; i <n; i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   int element;
   cin>>element;
   int lb=lower_bound(v,element);
    cout << lb << " " << (lb == -1 ? "No value" : to_string(v[lb])) << endl;//condition ? value_if_true : value_if_false;
    int ub=upper_bound(v,element);
    cout << ub << " " << (ub == -1 ? "No value" : to_string(v[ub])) << endl;

   
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/