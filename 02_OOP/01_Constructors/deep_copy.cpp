#include <iostream>
using namespace std;

// Deep Copy Example

class Demo
{
private:
    int *ptr;

public:
    Demo(int value)
    {
        ptr = new int(value);
    }

    // Deep Copy Constructor
    Demo(const Demo &obj)
    {
        ptr = new int(*(obj.ptr));  // allocate new memory
        cout << "Deep Copy Constructor Called\n";
    }

    void setValue(int value)
    {
        *ptr = value;
    }

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
    Demo d2 = d1;   // deep copy

    d2.setValue(50);

    cout << "d1: ";
    d1.display();

    cout << "d2: ";
    d2.display();

    return 0;
}
