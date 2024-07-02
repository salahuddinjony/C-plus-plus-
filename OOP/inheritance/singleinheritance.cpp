#include <bits/stdc++.h>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inId)
    {
        id = inId;
        salary = 34.0;
    }
    Employee() {} // default constructor for object
};

/*
 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
-Default invisibily mode is private
*/

// Creating a Programmer class derived from Employee Base class

class Programmer : public Employee
{
public:
    int languageCode;

    Programmer(int inId)
    {
        id = inId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee salah(1);
    cout << salah.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}