#include <iostream>
using namespace std;

// Copy Constructor Example

class Student
{
private:
    int roll;

public:
    Student(int r)
    {
        roll = r;
        cout << "Constructor Called\n";
    }

    // Copy Constructor
    Student(const Student &obj)
    {
        roll = obj.roll;
        cout << "Copy Constructor Called\n";
    }

    void display() const
    {
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    Student s1(101);

    Student s2 = s1;  // copy constructor called

    s2.display();

    return 0;
}
