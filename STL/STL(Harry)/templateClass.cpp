#include <iostream>
// using namespace std;
/* We then very easily added a parameter, while defining the vectors, of its data type.
And the compiler itself transformed the class accordingly. 
Here we passed a float and the code handled it very efficiently. */
 
template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // Multiply corresponding elements and accumulate
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    std::cout<<"\nThe dot product is: "<<a<<std::endl; // Using std:: prefix to access elements from the standard library
    return 0;
}
