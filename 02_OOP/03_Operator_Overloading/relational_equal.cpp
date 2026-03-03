#include <iostream>
using namespace std;

// Student Class
class Student
{
private:
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display() const
    {
        cout << "Roll: " << roll
             << " Name: " << name << endl;
    }

    // Overloading == operator
    bool operator==(const Student &obj) const
    {
        return (roll == obj.roll && name == obj.name);
    }
};

int main()
{
    Student s1(101, "Aman");
    Student s2(101, "Aman");

    s1.display();
    s2.display();

    if (s1 == s2)
        cout << "\nBoth students are same.\n";
    else
        cout << "\nStudents are different.\n";

    return 0;
}
