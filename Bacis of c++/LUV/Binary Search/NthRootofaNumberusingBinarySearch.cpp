#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
double eps = 1e-6;

//for nth root
double multiply(int mid,int n){
    int ans=1;
    for (int i = 0; i <n; i++)
    {
       ans*=mid;
    }
    return ans;
}
int main() {
    optimize();
    int x;
    cin >> x;
    int n;
    cin>>n; //nth root

    if (x == 0 || x == 1) {  // Handle small input cases
        cout << x << endl;
        return 0;
    }

    double lo = 1, hi = x, mid;
    while (hi - lo > eps) {
        mid = (hi + lo) / 2;
        if (multiply(mid,n) < x) {
            lo = mid;
        } else {
            hi = mid;
        }
    }

    cout <<fixed<<setprecision(10)<<lo << endl;  
    
    //cout <<hi << endl; //also print this 
    /*
    After the loop terminates, 
    the value of lo (or hi) will be approximately 3.000000,
    accurate to six decimal places, which is what we expect as the 
    square root of 9.
    */
 
    
    return 0;
}



/*

 #include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 2000000;
int a[N];
double eps = 1e-6;

int main() {
    optimize();
    int x;
    cin >> x;

    if (x == 0 || x == 1) {  // Handle small input cases
        cout << x << endl;
        return 0;
    }

    double lo = 1, hi = x, mid;
    while (hi - lo > eps) {
        mid = (hi + lo) / 2;
        if (mid * mid < x) {
            lo = mid;
        } else {
            hi = mid;
        }
    }

    cout <<fixed<<setprecision(10)<<lo << endl;  
    //cout <<hi << endl; //also print this 
    return 0;
}
*/

    /*After the loop terminates, 
    the value of lo (or hi) will be approximately 3.000000,
    accurate to six decimal places, which is what we expect as the 
    square root of 9.
    */
 
    
    
 

