﻿// #5 random numbers and calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float number1;
float number2;
char mathOperator;
float result;
string message;

void resultPrinter(char, string);
void ifElseCalculator(float, float, char);
void switchCaseCalculator(float, float, char);

int calculator()
{
    cout << endl;
    cout << "Simple calculator" << endl;
    
    cout << endl;
    cout << "Input float for number1 variable like 1.2" << endl;
    cin >> number1;
    cout << endl;

    cout << endl;
    cout << "Input float for number2 variable like 1.2" << endl;
    cin >> number2;
    cout << endl;
    
    cout << endl;
    cout << "Input one of math operators like '+, -, *, /'" << endl;
    cin >> mathOperator;
    cout << endl;

    ifElseCalculator(number1, number2, mathOperator);
    switchCaseCalculator(number1, number2, mathOperator);
    
    system("pause");
    
    return 0;
}

void resultPrinter(float result, string message) {
    cout << endl;
    cout << "Printed by " << message << " calculator!" << endl;
    cout << "The result = " << result << endl;
    cout << endl;
}

void ifElseCalculator(float number1, float number2, char mathOperator) {
    message = "ifElseCalculator";

    if (mathOperator == '+')
        result = number1 + number2;
    else if (mathOperator == '-')
        result = number1 - number2;
    else if (mathOperator == '*')
        result = number1 * number2;
    else if (mathOperator == '/')
        result = number1 / number2;

    resultPrinter(result, message);
}

void switchCaseCalculator(float number1, float number2, char mathOperator) {
    message = "switchCaseCalculator";

    switch (mathOperator) {
    case '+': result = number1 + number2;
    case '-': result = number1 - number2;
    case '*': result = number1 * number2;
    case '/ ': result = number1 / number2;
    }
    
    resultPrinter(result, message);
}
