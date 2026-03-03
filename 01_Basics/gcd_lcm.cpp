#include <iostream>
using namespace std;

// Program: GCD and LCM of Two Numbers
// Concepts Used:
// 1. Euclidean Algorithm for GCD
// 2. Formula: LCM(a, b) = (a * b) / GCD(a, b)

// Function to calculate GCD using Euclidean Algorithm
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Ensure numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int gcd = findGCD(num1, num2);

    // LCM formula
    int lcm = (num1 * num2) / gcd;

    cout << "\nGreatest Common Divisor (GCD): " << gcd << endl;
    cout << "Least Common Multiple (LCM): " << lcm << endl;

    return 0;
}
