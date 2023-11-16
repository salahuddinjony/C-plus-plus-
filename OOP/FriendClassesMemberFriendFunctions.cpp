#include <bits/stdc++.h>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as a friend
    //  friend int Calculator ::sumRealComplex(Complex, Complex);
    //  friend int Calculator ::sumComComplex(Complex, Complex);

    // After:Declaring the entire Calculator class as a friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "The complex is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{

    return (o1.a + o2.a);
}
int Calculator ::sumComComplex(Complex o1, Complex o2)
{

    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(2, 7);
    o2.printNumber();

    Calculator clac;
    int result = clac.sumRealComplex(o1, o2);
    cout << "Sum of real part of number " << result << endl;
    int resultc = clac.sumComComplex(o1, o2);
    cout << "Sum of complex part of number " << resultc << "i" << endl;

    return 0;
}