#include <iostream>
#include "calculator.h"
#include "mathematical operations.h"
#include "random numbers.h"

using namespace std;

int menuSelector = 0;
bool exitProgram = false;
char exitProgramFlag;

int mainMenu();
int announcement();
int runScriptOrExit();
int switchExecutor();
bool setExitProgramFlag(char);

int main()
{
	announcement();
	
	do 
	{
		runScriptOrExit();
		if (exitProgram)
			return 0;

		mainMenu();
		
		cin >> menuSelector;
		
		switchExecutor();
		
		menuSelector = 0;

	} while (exitProgram == false);
}

int announcement()
{
	cout << "This is an interesting solution of lesson #5." << endl;
	cout << "Here are some mathimatics opearions." << endl;
	cout << endl;

	// TODO check implementation of void
	return 0;
}

int mainMenu() {
		cout << endl;
		cout << "Calculator demonstration - input '1'." << endl;
		cout << "Other math operations - input '2'." << endl;
		cout << "Math function 'rand()' - input '3'." << endl;
		cout << endl;

		return 0;
}

int runScriptOrExit()
{
	cout << endl;
	cout << "Press '1' to continue, press another char to exit." << endl;
	cout << endl;

	cin >> exitProgramFlag;

	setExitProgramFlag(exitProgramFlag);

	return 0;
}


int switchExecutor()
{
	if (menuSelector == 1)
		calculator();
	else if (menuSelector == 2)
		mathematicalOperations();
	else if (menuSelector == 3)
		randomNumbers();
	else
		system("pause");
		cout << "Wrong menu selector." << endl;
		setExitProgramFlag('0');
	return 0;
}

bool setExitProgramFlag(char exitProgramFlag)
{
	if (exitProgramFlag != '1')
		exitProgram = true;

	return 0;
}
