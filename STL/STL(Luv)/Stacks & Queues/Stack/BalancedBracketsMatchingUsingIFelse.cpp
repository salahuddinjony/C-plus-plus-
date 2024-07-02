// CPP program to check for balanced brackets.

#include <bits/stdc++.h> // Include the necessary header file for using stack and other standard library functions.
using namespace std;

// function to check if brackets are balanced
bool areBracketsBalanced(string expr) 
{ 
    stack<char> s; // Declare a stack to store opening brackets encountered.

    char x; // Variable to store the current character being processed.

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++) // Iterate through each character in the input expression.
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') // If the current character is an opening bracket,
        { 
            // Push the element in the stack
            s.push(expr[i]); // Push the opening bracket onto the stack.
            continue; // Move to the next iteration.
        } 

        // IF current character is not an opening bracket, then it must be a closing bracket. 
        // So, the stack cannot be empty at this point.
        if (s.empty()) // If the stack is empty,
            return false; // Return false, indicating unbalanced brackets.

        switch (expr[i]) { // Switch case to handle different closing brackets.
            case ')': // If the current character is a closing parenthesis,
                // Store the top element in 'x' (the most recent opening bracket encountered).
                x = s.top(); 
                s.pop(); // Remove the top element from the stack.
                if (x == '{' || x == '[') // If the top element does not match the expected opening bracket,
                    return false; // Return false, indicating unbalanced brackets.
                break; 

            case '}': // If the current character is a closing curly brace,
                // Store the top element in 'x' (the most recent opening bracket encountered).
                x = s.top(); 
                s.pop(); // Remove the top element from the stack.
                if (x == '(' || x == '[') // If the top element does not match the expected opening bracket,
                    return false; // Return false, indicating unbalanced brackets.
                break; 

            case ']': // If the current character is a closing square bracket,
                // Store the top element in 'x' (the most recent opening bracket encountered).
                x = s.top(); 
                s.pop(); // Remove the top element from the stack.
                if (x == '(' || x == '{') // If the top element does not match the expected opening bracket,
                    return false; // Return false, indicating unbalanced brackets.
                break; 
        } 
    } 

    // Check if the stack is empty after traversing the entire expression.
    return s.empty(); // Return true if the stack is empty (all brackets are balanced), otherwise return false.
} 

// Driver code
int main() 
{ 
    string expr = "{()}[]"; // Define a sample expression.

    // Function call to check if brackets are balanced
    if (areBracketsBalanced(expr)) // If the function returns true (brackets are balanced),
        cout << "Balanced"; // Print "Balanced".
    else
        cout << "Not Balanced"; // Otherwise, print "Not Balanced".
    
    return 0; // Exit the program.
} 
