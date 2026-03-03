#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a vector of integers
    vector<int> numbers = {10, 20, 30};

    // Adding elements
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Vector elements: ";
    for (int n : numbers)
        cout << n << " ";

    cout << "\nSize: " << numbers.size();
    cout << "\nCapacity: " << numbers.capacity();

    // Removing last element
    numbers.pop_back();

    cout << "\nAfter pop_back(): ";
    for (int n : numbers)
        cout << n << " ";

    return 0;
}
