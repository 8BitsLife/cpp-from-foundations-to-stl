#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};

    l.push_front(5);
    l.push_back(40);

    cout << "List elements: ";
    for (int x : l)
        cout << x << " ";

    l.remove(20); // remove specific value

    cout << "\nAfter removing 20: ";
    for (int x : l)
        cout << x << " ";

    return 0;
}
