/* The main difference between local variable and static variable is that, 
the value of static variable persists the end of the program. */



#include <iostream>
using namespace std;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    
    test();
    test();

    return 0;
}

/* Output of above program if var was not specified as static variable

1
1


 */