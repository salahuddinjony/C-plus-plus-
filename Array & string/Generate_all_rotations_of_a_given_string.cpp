// A simple C++ program to generate all rotations
// of a given string
#include<bits/stdc++.h>
using namespace std;

// Print all the rotated string.
void printRotatedString(string str)
{

	
	int len = str.length();

	// Generate all rotations one by one and print
	char temp[len];
	for (int i = 0; i < len; i++)
	{
		int j = i; // Current index in str
		int k = 0; // Current index in temp

		// Copying the second part from the point
		// of rotation.			 01234
		while (str[j] != '\0') //geeks eeksg eksge ksgee sgeek
		{
			temp[k] = str[j]; 
			k++;
			j++;
		}

		// Copying the first part from the point
		// of rotation.
		j = 0;
		while (j < i)
		{
			temp[k] = str[j];
			j++;
			k++;
		}

		cout<<temp<<endl;
	}
}

// Driven Program
int main()
{
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<"\n";

	printRotatedString(str);
	return 0;
}

