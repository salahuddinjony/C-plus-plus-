#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e7+10;
long long ar[N];

//Problem Link: https://www.hackerrank.com/challenges/crush/problem

int main() {
    optimize();
    
    long long n, m;
    cin >> n >> m;

    // Initialize the difference array
    while (m--) {
        long long a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;  // Start adding d from index a
        ar[b + 1] -= d;  // Stop adding after index b
    }

    // Calculate the prefix sum to apply the range update
    for (long long i = 1; i <= n; i++) {
        ar[i] += ar[i - 1];
    }

    // Find the maximum element in the array
    long long mx = *max_element(ar + 1, ar + n + 1);  // Dereference the iterator
    cout << mx << endl;

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/