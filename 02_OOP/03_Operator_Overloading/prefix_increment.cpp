#include <iostream>
using namespace std;

// Counter Class
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

    // Prefix Increment Overloading
    Counter operator++()
    {
        ++value;  // increment first
        return *this; // return updated object
    }
};

int main()
{
    Counter c1(10);

    cout << "Before Prefix Increment:\n";
    c1.display();

    ++c1;  // Calls overloaded operator

    cout << "After Prefix Increment:\n";
    c1.display();

    return 0;
}
