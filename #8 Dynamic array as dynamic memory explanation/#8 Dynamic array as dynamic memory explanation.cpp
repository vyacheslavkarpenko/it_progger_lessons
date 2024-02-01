#include <iostream>

using namespace std;

int main()
{
    // Define array using pointer
    // where '*' is pointer symbol
    // 'numbers' is name of variables
    // 'new int[3]' array of 3 elements definition 
    // Here reserved 12 bytes of memory for array 'numbers'
    int* numbers = new int[3];

    // Set first element of array
    numbers[0] = 11;

    // Output first element of array
    cout << "Value of the first element of array 'numbers' is: "<< numbers[0] << endl;

    // Clear memory space for array 'numbers'
    // Here caled with '[]' because it is array
    delete[] numbers;

    // Check first element of array after clearing memory space
    // Value of array is not expected
    cout << "Value of the first element of array 'numbers' is: " << numbers[0] << endl;

    return 0;
}
