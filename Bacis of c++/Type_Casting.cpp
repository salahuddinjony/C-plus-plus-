#include <iostream>

using namespace std;

int main() {
    // initializing a double variable
    double num_double = 3.56;
    double num=3.1416;
    cout << "num_double = " << num_double << endl;
    cout << "num = " << num<< endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    int num1=(int)num;
    cout << "num_int1   = " << num_int1 << endl;
    cout << "num1  = " << num1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    int num2=int(num);
    cout << "num_int2   = " << num_int2 << endl;
     cout << "num1   = " << num1 << endl;

    return 0;
}