#include <iostream>
using namespace std;

int main() {
    // Example 1: Constant variable
    const int x = 5;
    // x = 10;  // Error: Attempting to modify a const variable

    cout << "Example 1: Constant variable x = " << x << endl;

    // Example 2: Constant pointer
    int y = 20;
    const int *ptr = &y;
    // *ptr = 30;  // Error: Attempting to modify through a const pointer
    // ptr++;     // Error: Attempting to modify the pointer itself

    cout << "Example 2: Constant pointer *ptr = " << *ptr << endl;

    // Example 3: Constant reference
    int z = 15;
    const int &ref = z;
    // ref = 25;  // Error: Attempting to modify through a const reference
    // z = 25;    // Allowed,  change the value accessed through the const reference

    cout << "Example 3: Constant reference ref = " << ref << endl;
    //cout << "Example 3: Constant reference ref of z = " << z << endl;

    return 0;
}
