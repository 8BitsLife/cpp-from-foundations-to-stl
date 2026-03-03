#include <iostream>
using namespace std;

// Parameterized Constructor Example

class Student
{
private:
    int roll;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n)
    {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called\n";
    }

    void display() const
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1(101, "Aman");
    s1.display();

    return 0;
}
