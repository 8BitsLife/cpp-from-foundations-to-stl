
#include <iostream>
using namespace std;

// Function Call Operator Overloading Example
class Multiplier
{
private:
    int factor;

public:
    Multiplier(int f) : factor(f) {}

    // Overloading () operator
    int operator()(int value)
    {
        return value * factor;
    }
};

int main()
{
    Multiplier m(5);

    cout << "5 x 10 = " << m(10) << endl;
    cout << "5 x 3  = " << m(3) << endl;

    return 0;
}
