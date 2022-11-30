// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0){
        var = -var; 
    }
        
    return var;  //this is return when 'if codition' is false
}

// function with int type parameter
int absolute(int var) {
     if (var < 0){
          var = -var;

     }
        
    return var; //this is return when 'if codition' is false
}

int main() {
    
    // call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl; //Here we uese 5.5f , here 'f' is denote the number is float
    return 0;
}