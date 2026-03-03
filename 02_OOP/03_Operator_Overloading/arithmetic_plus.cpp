#include <iostream>
using namespace std;

// Class to represent Complex Numbers
class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading + operator
    Complex operator+(const Complex &obj) const
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }
};

// MAIN
int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Using overloaded + operator
    Complex c3 = c1 + c2;

    cout << "After Addition: ";
    c3.display();

    return 0;
}
