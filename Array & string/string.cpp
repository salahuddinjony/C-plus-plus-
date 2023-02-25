#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.get(str,100);
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";  //Notice that, in the second example only "Programming" is displayed instead of "Programming is fun".
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}