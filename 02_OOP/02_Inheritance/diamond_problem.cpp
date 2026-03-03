#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

// Using virtual inheritance to avoid duplication
class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout << name << " is teaching." << endl;
    }
};

class Researcher : virtual public Person
{
public:
    void research()
    {
        cout << name << " is researching." << endl;
    }
};

// Derived from both
class Professor : public Teacher, public Researcher
{
public:
    void show()
    {
        cout << "Professor Name: " << name << endl;
    }
};

int main()
{
    Professor p;
    p.setName("Dr. Sharma");

    p.show();
    p.teach();
    p.research();

    return 0;
}
