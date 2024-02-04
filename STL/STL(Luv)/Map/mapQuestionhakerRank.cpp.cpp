#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    multimap<pair<int, string>, string> m;

    while (n--)
    {

        string s;

        int marks;

        cin >> s >> marks;

        m.insert({{100 - marks, s}, s});
    }

    for (auto i : m)
    {

        cout << i.second << " " << (100 - (i.first.first)) << endl;
    }

    return 0;
}