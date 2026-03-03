#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate ignored

    cout << "Set elements (sorted, unique): ";
    for (int x : s)
        cout << x << " ";

    if (s.find(20) != s.end())
        cout << "\n20 found in set";

    return 0;
}
