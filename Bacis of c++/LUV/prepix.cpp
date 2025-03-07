#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 2000000;
long long pre[N];
int a[N];


/*
Given array a of N• integers. Given 0 queries
and in each query given L and R print sum of
array elemnts from index L to R(L, R included)
Constraints
1 <= N <= 10^5
1 <= alil <= 10^9
1 <= Q <= 10^5
1 < L, R < N
*/

int main()
{
    optimize();

    //-----------Prepix Sum in 1d---------


    int n;
    cin >> n;
    long long a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}



/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/