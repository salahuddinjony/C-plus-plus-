#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 1005;  // N is limited to 1000 based on the problem constraints
int a[N][N];
long long twoDprefix[N][N];  // Use long long to handle large sums

int main()
{
    optimize();
    
    int n;
    cin >> n;
    
    // Input 2D array and calculate prefix sum
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            twoDprefix[i][j] = a[i][j] + twoDprefix[i-1][j] + twoDprefix[i][j-1] - twoDprefix[i-1][j-1];
        }
    }
    
    int t;
    cin >> t;
    
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Calculate sum for the submatrix (a, b) to (c, d)
        long long sum = twoDprefix[c][d] - twoDprefix[a-1][d] - twoDprefix[c][b-1] + twoDprefix[a-1][b-1];
        cout << sum << endl;
    }

    /*
input:
3
3 6 2
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3
s
Output:
26
24

0(N^2) + 0(Q) = 10 ^ 6 + 10 ^ 5 = 10 ^ 6
    */

    return 0;
}


/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/