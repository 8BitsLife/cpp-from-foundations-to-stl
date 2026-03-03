#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);

    cout << "Multiset elements (duplicates allowed): ";
    for (int x : ms)
        cout << x << " ";

    cout << "\nCount of 10: " << ms.count(10);

    return 0;
}
