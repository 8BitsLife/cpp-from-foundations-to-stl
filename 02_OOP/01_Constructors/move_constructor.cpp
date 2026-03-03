#include <iostream>
using namespace std;

// Move Constructor Example

class Demo
{
private:
    int *ptr;

public:
    Demo(int value)
    {
        ptr = new int(value);
        cout << "Constructor Called\n";
    }

    // Move Constructor
    Demo(Demo &&obj)
    {
        ptr = obj.ptr;     // steal resource
        obj.ptr = nullptr; // avoid double delete
        cout << "Move Constructor Called\n";
    }

    void display() const
    {
        if (ptr)
            cout << "Value: " << *ptr << endl;
        else
            cout << "Pointer is null\n";
    }

    ~Demo()
    {
        delete ptr;
    }
};

int main()
{
    Demo d1(100);

    Demo d2 = std::move(d1);   // move constructor

    cout << "After Move:\n";
    d2.display();
    d1.display();

    return 0;
}
