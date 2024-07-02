#include <bits/stdc++.h>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &); // frind function

public:
    void inData(int a)
    {
        val1 = a;
    }
    void Display(void)
    {
        cout << "The value of c1: " << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &); // frind function

public:
    void inData(int a)
    {
        val2 = a;
    }
    void Display(void)
    {
        cout << "The value of c2: " << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y) // call by referrence
{

    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inData(2);
    oc1.Display();

    oc2.inData(3);
    oc2.Display();

    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging: ";
    oc1.Display();

    cout << "The value of c2 after exchanging: ";
    oc2.Display();

    return 0;
}