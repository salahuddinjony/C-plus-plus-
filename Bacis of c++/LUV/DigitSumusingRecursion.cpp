#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];

int DigitSUm(int n) {
    if(n==0) return ;
   return DigitSUm(n/10) + n%10;
}

int main() {
    optimize();
    
    int n;
   cin>>n;
   cout<<DigitSUm(n)<<endl;
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/