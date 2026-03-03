
#include <iostream>
using namespace std;

// ==========================================
// Subscript Operator Overloading Example
// ==========================================

class Array
{
private:
    int arr[5];

public:
    Array()
    {
        for (int i = 0; i < 5; i++)
            arr[i] = i * 10;   // initialize values
    }

    // Overloading [] operator
    int& operator[](int index)
    {
        if (index < 0 || index >= 5)
        {
            cout << "Index out of bounds!\n";
            exit(0);
        }
        return arr[index];
    }
};

int main()
{
    Array a;

    cout << "Array Elements:\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    // Modifying value using []
    a[2] = 100;

    cout << "\nAfter modification:\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
