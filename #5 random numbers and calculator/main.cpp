#include <iostream>
#include "calculator.h"
#include "mathematical operations.h"

using namespace std;

int menuSelector = 0;
bool exitProgram = false;
char exitProgramFlag = '0';

int mainMenu();
int announcement();
int runScriptOrExit();
int executor();
bool setExitProgramFlag(char);

int main()
{
	
	do 
	{
		runScriptOrExit();
		if (exitProgram)
			return 0;

	    announcement();
		mainMenu();
		
		cin >> menuSelector;
		
		executor();
		
		menuSelector = 0;

	} while (exitProgram == false);
}

int announcement()
{
	cout << "This is an interesting solution of lesson #5." << endl;
	cout << "Here are some mathimatics opearions." << endl;
	cout << endl;

	return 0;
}

int mainMenu() {
		cout << "Calculator demonstration input '1'." << endl;
		cout << "Other math operations input '2'." << endl;
		cout << "Math function 'rand()' input '3'." << endl;
		cout << endl;

		return 0;
}

int runScriptOrExit()
{
	cout << "menuSelector is " << menuSelector << endl;
	cout << endl;
	cout << "Press '1' to exit, press '0' to select menu selector." << endl;
	cout << endl;

	cin >> exitProgramFlag;

	setExitProgramFlag(exitProgramFlag);

	return 0;
}


int executor()
{
	if (menuSelector == 1)
	{
		calculator();
	}
	else if (menuSelector == 2)
	{
		mathematicalOperations();

	}

	return 0;
}

bool setExitProgramFlag(char exitProgramFlag)
{
	if (exitProgramFlag == '1')
		exitProgram = true;

	return 0;
}
