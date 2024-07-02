#include <iostream>

class vector
{
public:
    int *arr; // Pointer to an array to store vector elements
    int size; // Size of the vector

    // Constructor to initialize the vector with a given size
    vector(int m)
    {
        size = m;
        arr = new int[size]; // Dynamically allocate memory for the vector
    }

    // Member function that calculates the dot product of the current vector (this) and another vector v.
    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // Multiply corresponding elements and accumulate
        }
        return d;
    }
};

int main()
{
    // Create two vector objects v1 and v2 with a size of 3
    vector v1(3); // vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3); // vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

 // Calls the dotProduct function on v1 with v2 as an argument, and stores the result in the variable result
    int result = v1.dotProduct(v2);

    // Print the result
    std::cout << "Dot Product: " << result <<std::endl;

/*     Remove using namespace std;. Unfortunately, using this is taught by lots 
    of tutorials and books, but it comes with many problems, one of which you have 
    just witnessed. */
    return 0;
}
