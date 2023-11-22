#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    // Defual constructors
    Complex()
    {
        a = 0;
        b = 0;
    }
    // Peramiterized constructors
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void dispaly(void)
    {
        cout << "The numbe is " << a << " + " << b << "i" << endl;
    }
};
 int main()
{
    Complex c1(1, 2);
    c1.dispaly();

    Complex c2(3);
    c2.dispaly();

    Complex c3;
    c3.dispaly();

    return 0;
}