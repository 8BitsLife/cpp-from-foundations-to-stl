#include <iostream>
using namespace std;

// Level 1
class Grandparent
{
protected:
    string familyName;

public:
    void setFamily(string f)
    {
        familyName = f;
    }
};

// Level 2
class Parent : public Grandparent
{
protected:
    string parentName;

public:
    void setParent(string p)
    {
        parentName = p;
    }
};

// Level 3
class Child : public Parent
{
private:
    string childName;

public:
    void setChild(string f, string p, string c)
    {
        setFamily(f);
        setParent(p);
        childName = c;
    }

    void display() const
    {
        cout << "Family Name: " << familyName << endl;
        cout << "Parent Name: " << parentName << endl;
        cout << "Child Name : " << childName << endl;
    }
};

int main()
{
    Child c;
    c.setChild("Sharma", "Rajesh", "Aman");
    c.display();

    return 0;
}
