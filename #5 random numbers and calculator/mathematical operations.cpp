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

	// Short operations


	return 0;
}
