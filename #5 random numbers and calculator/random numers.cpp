#include <iostream>

using namespace std;

void randomNumbers()
{
	cout << "Random numbers" << endl;
	int randomResul;
	int randValue = rand();

	randomResul = 1 + rand() % 20;
	cout << "randValue = "<< randValue << endl;
	cout << "Random results = " << randomResul << endl;
}
