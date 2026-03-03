#include <iostream>
using namespace std;

// Program: Demonstration of Control Statements
// Includes:
// 1. if
// 2. if-else
// 3. switch-case
// 4. ternary operator
// 5. goto

int main()
{
start:   // label for goto

    int number;

    cout << "\nEnter a number: ";
    cin >> number;

    // 1️⃣ IF statement

    if (number > 0)
    {
        cout << "Number is positive.\n";
    }

    // 2️⃣ IF-ELSE statement

    if (number % 2 == 0)
    {
        cout << "Number is Even.\n";
    }
    else
    {
        cout << "Number is Odd.\n";
    }

    // 3️⃣ TERNARY Operator

    int result = (number >= 0) ? number : -number;

    cout << "Absolute value using ternary: "
         << result << endl;

    // 4️⃣ SWITCH CASE

    int choice;

    cout << "\nMenu:\n";
    cout << "1. Square\n";
    cout << "2. Cube\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Square: " << number * number << endl;
            break;

        case 2:
            cout << "Cube: " << number * number * number << endl;
            break;

        case 3:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
    }

    // 5️⃣ GOTO statement

    char again;
    cout << "\nDo you want to enter another number? (y/n): ";
    cin >> again;

    if (again == 'y' || again == 'Y')
    {
        goto start;   // jump back to beginning
    }

    cout << "\nProgram ended successfully.\n";

    return 0;
}
