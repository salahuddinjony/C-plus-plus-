/*
//Ordinary function returns value but this function doesn't. 
Hence, you cannot return a constant from the function.
int& test() {
    return 2;
}
//You cannot return a local variable from this function.
int& test() {
    int n = 2; 
    return n; 
}
 */


#include <iostream>
using namespace std;

// global variable
int num;

// function declaration
int& test();

int main() {

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 5;

  cout << num<<endl;

  return 0;
}

// function definition
// returns the address of num variable
int& test() {
  return num;
}