#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MAXN = 1e5 + 10;
const int ALPHABET_SIZE = 26;
int hashArr[MAXN][ALPHABET_SIZE];

void preprocess(string &s) {
    int n = s.length();
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            hashArr[i][j] = hashArr[i - 1][j]; // carry forward previous counts
        }
        hashArr[i][s[i - 1] - 'a']++; // increment count of current character
    }
}

bool canFormPalindrome(int l, int r) {
    int oddCount = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        int count = hashArr[r][i] - hashArr[l - 1][i];
        if (count % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1; // Palindrome condition
}

int main() {
    optimize();
    
    int q;
    cin >> q;
    
    string s;
    cin >> s;
    
    preprocess(s);
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        if (canFormPalindrome(l, r)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAXN = 1e5 + 10;
const int ALPHABET_SIZE = 26;

int hashArr[MAXN][ALPHABET_SIZE];

int main() {
    optimize();
    
    int q;
    cin >> q; // Number of queries
    
    while (q--) {
        string s;
        cin >> s;  // Input string
        int n = s.length();

        // Reset hash array for the current query
        memset(hashArr, 0, sizeof(hashArr));

        // Fill frequency table for each character
        for (int i = 0; i < n; i++) {
            hashArr[i + 1][s[i] - 'a']++;
        }

        // Build the prefix sum array for the frequency table
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            for (int j = 1; j <= n; j++) {
                hashArr[j][i] += hashArr[j - 1][i];
            }
        }

        // Query l, r to check if the substring from l to r can form a palindrome
        int l, r;
        cin >> l >> r;

        // Count odd characters in the range [l, r]
        int oddCharCount = 0;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            int cntChar = hashArr[r][i] - hashArr[l - 1][i];
            if (cntChar % 2 != 0) {
                oddCharCount++;
            }
        }

        // If more than 1 character has an odd frequency, it's impossible to form a palindrome
        if (oddCharCount > 1) {
            cout << "Impossible" << endl;
        } else {
            cout << "Possible" << endl;
        }
    }
    
    return 0;
}

*/