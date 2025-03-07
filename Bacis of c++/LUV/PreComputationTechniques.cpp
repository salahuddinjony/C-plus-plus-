#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
long long fact[N];
long long fre[N];
int a[N];

int main() {
    optimize();


/*
Given T Test cases and in each
test case a number N. Print its factorial
for each test case % M
where M = 10^9+7.
Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

/*
    fact[0]=fact[1]=1;
    for (int i = 2; i <N; i++)
    {
        fact[i]=fact[i-1]*i;
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<fact[n]<<endl;
    }
*/


/*
Given array a of N integers. Given Q queriess and in each 
query given a number X, print count of that number in array.
Constraints
1＜=N＜=10^5
1 <=Q＜= 10^7
*/

int x;
cin>>x;
for (int i = 0; i <x; i++)
{
    int w;
    cin>>w;
    fre[w]++;
}
int q;
cin>>q;
while (q--)
{
    int digit;
    cin>>digit;
    cout<<fre[digit]<<endl;    
}



    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/