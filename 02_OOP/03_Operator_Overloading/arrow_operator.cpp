
#include <iostream>
using namespace std;

// Arrow Operator Overloading Example
class Person
{
public:
    void greet()
    {
        cout << "Hello from Person class!\n";
    }
};

class SmartPointer
{
private:
    Person* ptr;

public:
    SmartPointer(Person* p) : ptr(p) {}

    // Overloading -> operator
    Person* operator->()
    {
        return ptr;
    }
};

int main()
{
    Person* p = new Person();
    SmartPointer sp(p);

    sp->greet();   // Using overloaded ->

    delete p;
    return 0;
}
