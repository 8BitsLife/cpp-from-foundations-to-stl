#include <iostream>
using namespace std;

// Student Class
// Demonstrates:
// 1. Stream Insertion (<<)
// 2. Stream Extraction (>>)

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    // Default constructor
    Student(int r = 0, string n = "", float m = 0.0)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Friend declaration for insertion operator <<
    friend ostream& operator<<(ostream &out, const Student &s);

    // Friend declaration for extraction operator >>
    friend istream& operator>>(istream &in, Student &s);
};

// Overloading << (Insertion Operator)
// Used for printing object
ostream& operator<<(ostream &out, const Student &s)
{
    out << "\nStudent Details\n";
    out << "Roll No: " << s.roll << endl;
    out << "Name    : " << s.name << endl;
    out << "Marks   : " << s.marks << endl;

    return out;  // Important for chaining
}

// Overloading >> (Extraction Operator)
// Used for taking input into object
istream& operator>>(istream &in, Student &s)
{
    cout << "Enter Roll No: ";
    in >> s.roll;

    cout << "Enter Name: ";
    in >> s.name;

    cout << "Enter Marks: ";
    in >> s.marks;

    return in;  // Important for chaining
}

// MAIN FUNCTION
int main()
{
    Student s1;

    // Using overloaded >> operator
    cin >> s1;

    // Using overloaded << operator
    cout << s1;

    return 0;
}
