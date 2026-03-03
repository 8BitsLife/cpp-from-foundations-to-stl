#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    cout << "Choose exception type:\n";
    cout << "1. Integer\n2. Double\n3. String\n";
    cin >> choice;

    try
    {
        if (choice == 1)
        {
            throw 10;
        }
        else if (choice == 2)
        {
            throw 3.14;
        }
        else if (choice == 3)
        {
            throw string("Custom string error!");
        }
        else
        {
            throw "Unknown error occurred!";
        }
    }
    catch (int e)
    {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (double e)
    {
        cout << "Double exception caught: " << e << endl;
    }
    catch (string e)
    {
        cout << "String exception caught: " << e << endl;
    }
    catch (...)
    {
        cout << "Default catch block: Unknown exception caught!" << endl;
    }

    cout << "\nProgram safely exited." << endl;

    return 0;
}
