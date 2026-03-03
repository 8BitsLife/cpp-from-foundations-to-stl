#include <iostream>
using namespace std;

// Factorial using loop

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: "
         << factorial << endl;

    return 0;
}
