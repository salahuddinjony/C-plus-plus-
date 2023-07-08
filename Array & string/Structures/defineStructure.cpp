#include <iostream>
using namespace std;

struct Person  //declare a strucutre name of person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1; //structure variable
    
    cout << "\nEnter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;

    cout << "\nName: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary<<endl;

    return 0;
}