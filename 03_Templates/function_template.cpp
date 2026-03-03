#include <iostream>
#include <string>
using namespace std;

// Basic Function Template
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// Template with Multiple Types
template <typename T1, typename T2>
void displayPair(T1 a, T2 b)
{
    cout << "First: " << a
         << " | Second: " << b << endl;
}

// Template Overloading
template <typename T>
T add(T a, T b)
{
    return a + b;
}

// Overloaded specifically for strings
string add(string a, string b)
{
    return a + " " + b;
}

// Template with Default Argument
template <typename T = int>
T square(T x)
{
    return x * x;
}

// MAIN
int main()
{
    cout << "Max of 10 and 20: "
         << maximum(10, 20) << endl;

    cout << "Max of 5.5 and 2.3: "
         << maximum(5.5, 2.3) << endl;

    displayPair("Age", 21);
    displayPair(3.14, "Pi");

    cout << "\nAdd ints: " << add(5, 6) << endl;
    cout << "Add doubles: " << add(2.5, 3.1) << endl;

    cout << "Add strings: "
         << add(string("Hello"), string("World")) << endl;

    cout << "\nSquare (default int): "
         << square(4) << endl;

    cout << "Square (double): "
         << square<double>(3.5) << endl;

    return 0;
}
