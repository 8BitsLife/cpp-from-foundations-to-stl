#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max heap by default
    priority_queue<int> pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Elements in priority order:\n";

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
