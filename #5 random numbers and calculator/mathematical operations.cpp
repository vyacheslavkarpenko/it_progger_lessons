#include <iostream>

using namespace std;

int numberOne;
int numberTwo;
int result;

int mathematicalOperations()
{
	// Division with remainder
	numberOne = 18;
	numberTwo = 3; 
	result = numberOne % numberTwo;
	
	cout << "18 % 3 = " << result << endl;

	return 0;
}
