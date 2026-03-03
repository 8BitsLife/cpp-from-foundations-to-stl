#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try
    {
        // Checking for division by zero
        if (num2 == 0)
        {
            // Throwing an integer exception
            throw 101;  
        }

        double result = (double)num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (int errorCode)
    {
        cout << "Exception Caught!\n";
        cout << "Error Code: " << errorCode << endl;
        cout << "Reason: Division by zero is not allowed." << endl;
    }

    cout << "\nProgram continues after exception handling." << endl;

    return 0;
}
