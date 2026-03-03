#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);

    cout << "Deque elements: ";
    for (int x : dq)
        cout << x << " ";

    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter popping from both ends: ";
    for (int x : dq)
        cout << x << " ";

    return 0;
}
