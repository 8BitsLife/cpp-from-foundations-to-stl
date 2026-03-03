#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

// Derived Class
class Student : public Person
{
private:
    int roll;

public:
    void setStudent(string n, int a, int r)
    {
        setPerson(n, a);  // calling base class function
        roll = r;
    }

    void displayStudent() const
    {
        displayPerson();
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    Student s;
    s.setStudent("Aman", 19, 101);
    s.displayStudent();

    return 0;
}
