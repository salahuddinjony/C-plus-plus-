/* In C++, the code of function declaration should be before the function call.
However, if we want to define a function after the function call, 
we need to use the function prototype. For example, */

/// using function definition after main() function
// function prototype is declared before main()

#include <iostream>
using namespace std;

// function prototype
int add(int, int); //We can also write like as: int add(int a, int b);

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// function definition
int add(int a, int b) {
    return (a + b);
}