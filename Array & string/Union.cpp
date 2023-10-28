// C++ program to illustrate the use
// of the unions
#include <iostream>
using namespace std;

// Defining a Union
union GFG {
	int Geek1;
	char Geek2;
	float Geek3;
};

// Driver Code
int main()
{
	// Initializing Union
	union GFG G1;

	G1.Geek1 = 34;
    G1.Geek2 ='C';
    G1.Geek3 = 222.2;

	// Printing values
	cout<< G1.Geek1 << endl;
    cout<< G1.Geek2 << endl;
    cout<< G1.Geek3 << endl;


    //enum
    
     
  //sotre       0        1        1
    enum meal{breakfasr, lunch , dinner};
    meal m1=lunch;
    cout<<(m1==2)<<endl; //return false(0)


	
	return 0;
}
