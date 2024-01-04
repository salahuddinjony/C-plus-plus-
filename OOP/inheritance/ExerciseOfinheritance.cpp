#include <bits/stdc++.h>
using namespace std;

class SimpleCal
{
protected:
    float a;
    float b;

public:
    void set_simple_value(float x, float y)
    {
        a = x;
        b = y;
    }
    void get_simple_value();
};

void SimpleCal :: get_simple_value()
{
    cout << "The add is: " << a + b << endl;
    cout << "The Sum is: " << a - b << endl;
    cout << "The div is: " << a / b << endl;
    cout << "The product is: " << a * b << endl;
}

class scienceCal
{
protected:
    float a;
    float b;

public:
public:
    void set_science_value(float x, float y)
    {
        a = x;
        b = y;
    }
    void get_science_value();
};

void scienceCal :: get_science_value()
{
    cout << "The sprt root (a + b) is: " << sqrt(a + b) << endl;
    cout << "The cubic root of (a) is: " << cbrt(a) << endl;
    cout << "The power of (a^b) is: " << pow(a, b) << endl;
    cout << "The abs of (b-a) is: " << abs(b - a) << endl;
}

class hybrideCal : public scienceCal, public SimpleCal
{
public:
    void Display()
    {
        get_simple_value();
        get_science_value();
    }
};

int main()
{

    hybrideCal salah;
    salah.set_simple_value(2, 3);
    salah.set_science_value(2, 3);
    salah.Display();

    return 0;
}