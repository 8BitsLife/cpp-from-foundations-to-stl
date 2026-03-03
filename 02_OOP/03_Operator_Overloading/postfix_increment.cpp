#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    Counter(int v = 0)
    {
        value = v;
    }

    void display() const
    {
        cout << "Value: " << value << endl;
    }

    // Postfix increment overloading
    Counter operator++(int)  // int is dummy parameter
    {
        Counter temp = *this; // store old value
        value++;              // increment after
        return temp;          // return old value
    }
};

int main()
{
    Counter c1(20);

    cout << "Before Postfix Increment:\n";
    c1.display();

    Counter c2 = c1++;  // old value goes to c2

    cout << "\nAfter Postfix Increment:\n";
    c1.display();

    cout << "Returned Old Value:\n";
    c2.display();

    return 0;
}
