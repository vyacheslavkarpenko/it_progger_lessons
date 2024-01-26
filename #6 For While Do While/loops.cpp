#include <iostream>

using namespace std;
int main() {

	// For example
	for (int i = 0; i < 10; i++)
		cout << "For iteration - " << i << endl;

	// While example
	int j = 0;
	while (j < 10)
	{
		cout << "While iteration - " << j << endl;
		j++;

	}

	// Do while example
	int k = 0;
	do {
		cout << " Do while iteration - " << k << endl;
		if (k == 5)
			break;
		k++;
	} while (k < 10);

	return 0;
}
