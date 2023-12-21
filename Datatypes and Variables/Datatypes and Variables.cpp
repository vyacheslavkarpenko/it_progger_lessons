#include <iostream>

int main()
{
	// namespace std; used to call 'std' class once and than just call 'cout' or 'cin' in code
	// this avoid long string that use 'std::cout' or 'std::cin'
	using namespace std;

	// Integer
	// Define integer variable like -10 0 100 and assign value -45 
	int number = -45;
	
	// This should print The variable number has a value of -45
	cout << "Variable number has value " << number << endl;

	//reassign number value
	number = 55;
	// This should print The variable number has a value of 55
	cout << "Variable number has value " << number << endl;

	// Single-line variable definition with the same data type.
	int x, y, z = 11, sum;

	cout << "We have 'x', 'y', and 'z' variables" << endl;
	cout << "'z' variable has value " << z << endl;

	cout << "Enter the 'x' variable" << endl;
	cin >> x;

	cout << "The 'x' variable has a value " << x << endl;

	cout << "Enter the 'y' variable" << endl;
	cin >> y;
	cout << "The 'y' variable has a value " << y << endl;
	
	sum = x + y + z;

	cout << "The sun of variables  'x', 'y', 'z' is a " << sum << endl;

	// Data Types

	// Integer
	short shortNumber1 = 7; // 2 bytes / from -32k to 32k   
	int intNumber1 = 5; // 4 bytes / from  -2B to 2B  
	long longNumber1 = 5; // 8 bytes /  ? 

	// using unsigned we excludes minus values range and attach to plus range 
	unsigned short shortNumber2 = 7; // 2 bytes / from 0B to 65k   
	unsigned int intNumber2 = 5; // 4 bytes / from  0B to 4B  
	unsigned long longNumber2 = 5; // 8 bytes / ?

	// Float
	float floanNunber = 5.6978566322f; // use 'f' symbol to point float nubmer / standart size for float, like integer 
	double doubleNunber = 4226.4546579854689f; // extended float size like 'long' data type for integer
	
	// Car (character)
	char charSymbol = '&'; // can contain single symbol

	// Boolean
	bool isHappy = true; // standart bolean data tyle
	
	return 0;
} 