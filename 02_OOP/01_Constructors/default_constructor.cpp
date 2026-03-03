#include <iostream>
using namespace std;

// Default Constructor Example
class Student
{
private:
    int roll;
    string name;

public:
    // Default Constructor
    Student()
    {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called\n";
    }

    void display() const
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;   // default constructor called
    s1.display();

    return 0;
}
