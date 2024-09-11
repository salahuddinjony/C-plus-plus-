#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int main() {
    optimize();
   int n;
   cin>>n;
   for (int i = 0; i <n; i++)
   {
    cin>>a[i];
   }
   sort(a,a+n);
   int to_find;
   cin>>to_find;
   int lo=0;
   int hi=n-1;
   int mid;

   while (hi-lo> 1)
   {
    mid=(hi+lo)/2;
    if(a[mid]<to_find){
        lo=mid+1;
    }else{
        hi=mid;
    }
   }
   if(a[lo]==to_find) cout<<lo<<endl;
   else if(a[hi]==to_find) cout<<hi<<endl;
   else cout<<"Not fund!"<<endl;
   
   
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/