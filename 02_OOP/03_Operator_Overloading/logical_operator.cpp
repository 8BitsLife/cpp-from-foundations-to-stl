
#include <iostream>
using namespace std;

// ==========================================
// Logical Operator Overloading Example
// ==========================================

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Overloading && operator
    bool operator&&(const Number &obj)
    {
        return (this->value > 0 && obj.value > 0);
    }
};

int main()
{
    Number n1(10);
    Number n2(5);
    Number n3(-2);

    if (n1 && n2)
        cout << "Both numbers are positive\n";

    if (!(n1 && n3))
        cout << "At least one number is negative\n";

    return 0;
}
