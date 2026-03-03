#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    while (!q.empty())
    {
        cout << "Serving: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
