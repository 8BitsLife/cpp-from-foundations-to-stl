#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // Pushing elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    // Removing elements
    while (!st.empty())
    {
        cout << "Popping: " << st.top() << endl;
        st.pop();
    }

    return 0;
}
