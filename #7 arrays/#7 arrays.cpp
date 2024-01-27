#include <iostream>

using namespace std;

int main()
{
    
    int firstArrayOfNumbers[3];
    
    firstArrayOfNumbers[0] = 12;
    firstArrayOfNumbers[1] = 10;
    firstArrayOfNumbers[2] = 39;

    cout << "firstArrayOfNumbers " << firstArrayOfNumbers << endl;
    cout << "firstArrayOfNumbers[0] " << firstArrayOfNumbers[0] << endl;
    cout << "firstArrayOfNumbers[2] " << firstArrayOfNumbers[2] << endl << endl;

    for (int i = 0; i < 3; i++ )
        cout << "firstArrayOfNumbers element iterator " << firstArrayOfNumbers[i] << endl;

    cout << endl;

    float arrayOfFloat[7] = {-2.9, 1.5, 0, 4.6, 8.7, 9.9, 3.4 };
    
    cout << "arrayOfFloat[2] " << arrayOfFloat[2] << endl << endl;

    float sumOfElements = 0.0;
    float minElement = 0.0;
    float maxElement = 0.0;
    for (int i = 0; i < 7; i++)
    {
        cout << "arrayOfFloat element iterator " << arrayOfFloat[i] << endl;
        
        sumOfElements += arrayOfFloat[i];

        if (arrayOfFloat[i] < minElement) {
            // Explanation
            // -2.9 < 0.0 -2.9
            // 1.5 < 0.0
            // 0.0 < 0.0
            // 4.6 < 0.0
            // 8.4 < 0.0
            // 9.9 < 0.0
            // 3.4 < 0.0
            minElement = arrayOfFloat[i];
        }

        if (arrayOfFloat[i] > maxElement) {
            cout << "debug = " << (arrayOfFloat[i] > maxElement) << endl;
            // Explanation
            // -2.9 > 0.0; 0.0
            // 1.5 > 0.0; 1.5
            // 0.0 > 1.5;
            // 4.6 > 1.5; 4.6
            // 8.4 > 4.6; 8.4
            // 9.9 > 8.4; 9.9
            // 3.4 > 9.9;
            maxElement = arrayOfFloat[i];
        }
    }

    cout << "sumOfElements = " << sumOfElements << endl;
    cout << endl;

    cout << "minElement = " << minElement << endl;
    cout << endl;

    cout << "maxElement = " << maxElement << endl;
    cout << endl;

    int multilevelArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++) {
        for (int v = 0; v < 4; v++) {
            cout << "multilevelArray = " << multilevelArray[i][v] << endl; 
        }
    }
    return 0;
}
