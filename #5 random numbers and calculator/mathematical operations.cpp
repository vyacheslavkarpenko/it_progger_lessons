#include <iostream>

using namespace std;

int numberOne;
int numberTwo;
int result;
int numberThree;
int numberFour;
int resultTwo;


int mathematicalOperations()
{
	// Division with remainder
	numberOne = 18;
	numberTwo = 3; 
	result = numberOne % numberTwo;

	cout << endl;
	cout << numberOne << " % "<< numberTwo << "  = " << result << endl;

	numberThree = 18;
	numberFour = 8;
	resultTwo = numberThree % numberFour;
	cout << numberThree << " % " << numberFour << "  = " << resultTwo << endl;

	// Using some operators
	int example1 = numberFour += 2; // 10
	cout << "example1 =  " << example1 << endl;
 
	return 0;
}
