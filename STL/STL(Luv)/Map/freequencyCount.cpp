#include <bits/stdc++.h>
using namespace std;

void printFrequency(vector<int> &vec)
{
	// Define an map
	map<int, int> M;

	// Traverse vector vec check if
	// current element is present
	// or not
	for (int i = 0; vec[i]; i++) {
    
   /*
    vec[i]: This is the condition for the loop to continue.
     In C/C++, arrays are evaluated as boolean expressions. 
     The loop will continue as long as the value of vec[i] is true (non-zero). 
     */
     
		// If the current element
		// is not found then insert
		// current element with
		// frequency 1
		if (M.find(vec[i]) == M.end()) {
			M[vec[i]] = 1;
		}

		// Else update the frequency
		else {
			M[vec[i]]++;
		}
	}

	// Traverse the map to print the
	// frequency
	for (auto& it : M) {
		cout << it.first << ' '
			<< it.second << '\n';
	}
}

// Driver Code
int main()
{
	vector<int> vec = { 1, 2, 2, 3, 1, 4, 4, 5 };

	// Function call
	printFrequency(vec);
	return 0;
}
