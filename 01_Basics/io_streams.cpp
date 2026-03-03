#include <iostream>
using namespace std;

// Program: I/O Streams Demonstration
// Purpose: Show how cin, cout, getline work

int main()
{
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);   // takes full line including spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n----- User Details -----\n";
    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;

    cout << "\nEnd of program using iostream." << endl;

    return 0;
}
