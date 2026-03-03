#include <iostream>
using namespace std;

// Generic Calculator Class

template <typename T>
class Calculator
{
private:
    T a, b;
    static int objectCount;   // static member to count objects

public:
    // Default Constructor
    Calculator() : a(0), b(0)
    {
        objectCount++;
    }

    // Parameterized Constructor
    Calculator(T x, T y) : a(x), b(y)
    {
        objectCount++;
    }

    // Copy Constructor
    Calculator(const Calculator &obj)
    {
        a = obj.a;
        b = obj.b;
        objectCount++;
    }

    // Set values
    void setValues(T x, T y)
    {
        a = x;
        b = y;
    }

    // Arithmetic operations
    T add() const { return a + b; }
    T subtract() const { return a - b; }
    T multiply() const { return a * b; }

    T divide() const
    {
        if (b == 0)
        {
            cout << "Division by zero error!\n";
            return 0;
        }
        return a / b;
    }

    // Operator Overloading (+)
    Calculator operator+(const Calculator &obj)
    {
        return Calculator(a + obj.a, b + obj.b);
    }

    // Friend function (template friend)
    template <typename U>
    friend void display(const Calculator<U> &obj);

    // Static function
    static int getObjectCount()
    {
        return objectCount;
    }
};

// Static member initialization
template <typename T>
int Calculator<T>::objectCount = 0;

// Friend function definition
template <typename U>
void display(const Calculator<U> &obj)
{
    cout << "Values: " << obj.a << " and " << obj.b << endl;
}

//MAIN FUNCTION
int main()
{
    Calculator<int> c1(10, 5);
    Calculator<int> c2(3, 2);

    display(c1);

    cout << "Addition: " << c1.add() << endl;
    cout << "Subtraction: " << c1.subtract() << endl;
    cout << "Multiplication: " << c1.multiply() << endl;
    cout << "Division: " << c1.divide() << endl;

    // Operator Overloading
    Calculator<int> c3 = c1 + c2;
    cout << "\nAfter adding two Calculator objects:\n";
    display(c3);

    cout << "\nTotal Objects Created: "
         << Calculator<int>::getObjectCount() << endl;

    return 0;
}
