#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter your Id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employe is " << id << " and employee number is " << count << endl;
    }

    static void getcount(void)
    {
        // cout<<id; // throws an error
        cout << "The number of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{

    Employee salah, Rahul, Rakin, sakin;

    // salah.id = 1;
    // salah.count=1; // cannot do this as id and count are private

    salah.setData();
    salah.getData();
    Employee::getcount();

    Rahul.setData();
    Rahul.getData();
    Employee::getcount();

    Rakin.setData();
    Rakin.getData();
    Employee::getcount();

    sakin.setData();
    sakin.getData();
    Employee::getcount();

    return 0;
}