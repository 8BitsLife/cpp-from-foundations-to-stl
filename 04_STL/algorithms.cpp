#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {40, 10, 30, 20};

    // Sorting
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int x : v)
        cout << x << " ";

    // Binary search
    if (binary_search(v.begin(), v.end(), 30))
        cout << "\n30 found in vector";

    // Reverse
    reverse(v.begin(), v.end());

    cout << "\nAfter reverse: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
