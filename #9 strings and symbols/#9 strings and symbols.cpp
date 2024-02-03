// #9 strings and symbols.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    // String definition using char datatype
    // We can define char word[] without specifying the number of array elements
    char word[] = { 'H', 'i', '!' };

    // Define string as char
    char word2[] = "Hi!";

    // Output word
    using namespace std;
    cout << "Created string by char is ";

    for (int i = 0; i < 3; i++)
    {
        cout << word[i];
    }

    cout << endl;

    cout << "Char as string " << word2 << endl;

    // Define string as string datatype
    string word3 = "Hello world!";
    cout << "String as string datatype " << word3 << endl;

    return 0;
}

