#include <iostream>
#include <cstring>
using namespace std;

// Primary Template
template <typename T>
class Printer
{
public:
    static void print(T value)
    {
        cout << "Generic print: " << value << endl;
    }
};

// Full Specialization for char*
template <>
class Printer<char*>
{
public:
    static void print(char* value)
    {
        cout << "Printing C-String: " << value << endl;
        cout << "Length: " << strlen(value) << endl;
    }
};

// Function Template Specialization
template <typename T>
void show(T value)
{
    cout << "Generic Show: " << value << endl;
}

// Specialized version for bool
template <>
void show<bool>(bool value)
{
    cout << "Boolean value: "
         << (value ? "True" : "False") << endl;
}

// Partial Specialization
template <typename T1, typename T2>
class Pair
{
public:
    static void info()
    {
        cout << "Generic Pair\n";
    }
};

// Partial specialization when both types same
template <typename T>
class Pair<T, T>
{
public:
    static void info()
    {
        cout << "Both types are same\n";
    }
};

// MAIN
int main()
{
    Printer<int>::print(100);

    char str[] = "Templates";
    Printer<char*>::print(str);

    cout << endl;

    show(50);
    show(true);

    cout << endl;

    Pair<int, double>::info();
    Pair<int, int>::info();

    return 0;
}
