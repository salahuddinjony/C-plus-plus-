#include<iostream>
using namespace std;
#include<string.h>
int main() {
   const char *str_inp1="JournalDEV";
   const char *str_inp2="JournalDEv";
   
cout<<"String 1:"<<str_inp1<<endl;
cout<<"String 2:"<<str_inp2<<endl;

	if (strcmp(str_inp1, str_inp2) == 0)
		cout << "\nBoth the input strings are equal." << endl;
	else
		cout << "The input strings are not equal.";
 
}