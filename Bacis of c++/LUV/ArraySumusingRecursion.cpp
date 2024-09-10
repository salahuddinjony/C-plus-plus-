#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int sum(int n,int a[]) {
    if(n<0) return 0;
    return sum(n-1,a)+a[n];
   
}

int main() {
    optimize();
    
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   cout<<sum(n-1,a)<<endl;
   
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/