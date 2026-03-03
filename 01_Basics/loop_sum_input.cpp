#include <iostream>
using namespace std;

// Program: Loop Sum Input
// Purpose: Take multiple inputs using loop and calculate sum

int main()
{
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int number;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;  // adding to sum
    }

    cout << "\nTotal Sum = " << sum << endl;

    return 0;
}
