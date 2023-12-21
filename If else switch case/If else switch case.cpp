#include <iostream>
#include <string>

int main()
{
    using namespace std;
 // switch case

    short magic_number;
    cout << "Please input number from 0 till 9 and find out magic number!" << endl;

    cin >> magic_number;

    switch (magic_number) {
    case 1:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 2:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 3:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 4:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 5:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 6:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 7:
        cout << "You number " << magic_number << " is magic!" << endl;
        break;
    case 8:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 9:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    case 0:
        cout << "You number " << magic_number << " is not magic!" << endl;
        break;
    default:
        cout << "Are you stupid! You number out of my range!" << endl;
        break;
    }

    cout << "\n" << endl;
 
    short number_for_comparation;
    short default_number = 5;
    string change_numgber_symbol = "n";
    bool shouldChangeNumber = false;
   
 // if else conditions example
    cout << "Default number is a " << default_number << endl;
    cout << "Type 'y' to change this one otherwise 'n'" << endl;
       
    cin >> change_numgber_symbol;
   
    // This 'if' without curly braces because one line inside the condition
    if (change_numgber_symbol == "y")
        shouldChangeNumber = true;
    
    // This 'if' with curly braces because many lines inside the condition
    if (shouldChangeNumber) {
        cout << "Input new default number " << endl;
        cin >> default_number;
        cout << "new default number is " << default_number << endl;
    }

    cout << "Please type number for comparation witn " << default_number << endl;
    cin >> number_for_comparation;


    if (number_for_comparation > default_number)
        cout << number_for_comparation << " more than " << default_number << endl;

    else if (number_for_comparation == default_number)
        cout << number_for_comparation << " and " << default_number << " are a equal" << endl;
    else
        cout << number_for_comparation << " less than " << default_number << endl;

    if (number_for_comparation >= default_number) 
        cout << number_for_comparation << " more or equal " << default_number << endl;

    if (number_for_comparation <= default_number)
        cout << number_for_comparation << " less or equal " << default_number << endl;

    if (number_for_comparation != default_number)
        cout << number_for_comparation << " is not equal " << default_number << endl;

    cout << "\n" << endl;

    // || &&
    // || (or) conditions example
    short ten = 10;
    bool is_ten = true;

    if (ten == 10 || is_ten == false)
        cout << "The variable 'ten' has value '10'" << endl;

    if (is_ten == false || ten == 10)
        cout << "The variable 'ten' has value '10'" << endl;

    // && (and) conditons example

    if (ten == 10 && is_ten == false)
        cout << "The variable 'ten' has value '10'" << endl;
    else
        cout << "The variable 'ten' has value '10' and variable 'is_ten' has not value 'false'" << endl;

    if (ten == 10 && is_ten == true)
        cout << "The variable 'ten' has value '10'" << endl;
    // The same as previous condition
    if (ten == 10 && is_ten == true)
        cout << "The variable 'ten' has value '10'" << endl;

    ten = 100;
    is_ten = false;
    if (ten != 10 && !is_ten)
        cout << "The variable 'ten' has not value '10'" << endl;
    
    system("pause");
    return 0;
}
