#include <bits/stdc++.h>
using namespace std;

// forward declaration
class Y;
class X
{
    int a;
    friend void add(X, Y);

public:
    void SetValue(int value)
    {

        a = value;
    }
};

class Y
{
    int b;
    friend void add(X, Y);

public:
    void SetValue(int value)
    {
        b = value;
    }
};

void add(X f1, Y f2)
{
    cout << "The sum is " << f1.a + f2.b << endl;
}
int main()
{
    X o1;
    Y o2;
    o1.SetValue(2);
    o2.SetValue(3);
    add(o1, o2);

    return 0;
}