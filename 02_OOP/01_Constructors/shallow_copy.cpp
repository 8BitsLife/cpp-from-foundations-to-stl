#include <iostream>
using namespace std;

// Shallow Copy Example

class Demo
{
private:
    int *ptr;

public:
    Demo(int value)
    {
        ptr = new int(value);
    }

    // Default copy constructor (shallow copy)
    // It copies the pointer, not the value

    void display() const
    {
        cout << "Value: " << *ptr << endl;
    }

    ~Demo()
    {
        delete ptr;
    }
};

int main()
{
    Demo d1(10);
    Demo d2 = d1;   // shallow copy

    d1.display();
    d2.display();

    return 0;
}
