#include <iostream>
using namespace std;

// Base Class
class Shape
{
protected:
    float value;

public:
    void setValue(float v)
    {
        value = v;
    }
};

// Derived Class 1
class Square : public Shape
{
public:
    float area()
    {
        return value * value;
    }
};

// Derived Class 2
class Circle : public Shape
{
public:
    float area()
    {
        return 3.14 * value * value;
    }
};

int main()
{
    Square s;
    s.setValue(5);
    cout << "Square Area: " << s.area() << endl;

    Circle c;
    c.setValue(4);
    cout << "Circle Area: " << c.area() << endl;

    return 0;
}
