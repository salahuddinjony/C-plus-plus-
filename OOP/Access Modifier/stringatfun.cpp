// CPP code to demonstrate std::string::at

#include <iostream>
using namespace std;

// Function to demonstrate std::string::at
void atDemo(string str)
{
	cout << str.at(5)<<endl;

	// Below line throws out of
	// range exception as 16 > length()
	// cout << str.at(16);
}

// Driver code
int main()
{
	string str("GeeksForGeeks");
	atDemo(str);
	return 0;
}
