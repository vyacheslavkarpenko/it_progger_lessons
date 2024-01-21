#include <iostream>
#include "calculator.h"
#include "mathematical operations.h"

using namespace std;

int menuSelector;
bool exitProgram = false;
int exitProgramFlag = 0;

int executor();
bool setExitProgramFlag(int);

int main()
{
	cout << "This is an interesting solution of lesson #5." << endl;
	cout << "Here are some mathimatics opearions." << endl;
	cout << endl;
	if (exitProgram == false)
	{
		cout << "Calculator demonstration input '1'." << endl;
		cout << "Other math operations input '2'." << endl;
		cout << "Math function 'rand()' input '3'." << endl;
		cout << endl;

		cin >> menuSelector;
	}

	executor();



	cout << "Press '1' to exit, press '2' to select another menu selector." << endl;
	cin >> exitProgramFlag;

	setExitProgramFlag(exitProgramFlag);
	
	if (exitProgram)
		return 0;
	else
		executor();

}

int executor()
{
	if (menuSelector == 1)
		calculator();
	else if (menuSelector == 2)
		mathematicalOperations();
	
	return 0;
}

bool setExitProgramFlag(int exitProgramFlag)
{
	if (exitProgramFlag == '1')
		exitProgram = true;
	
	return exitProgram;
}
