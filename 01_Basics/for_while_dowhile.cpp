#include <iostream>
using namespace std;

// Program: Demonstration of for, while and do-while loops
// Purpose: Show how each loop works

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // 1️⃣ FOR LOOP
  
    cout << "\nUsing FOR loop:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    // 2️⃣ WHILE LOOP
  
    cout << "\n\nUsing WHILE loop:\n";

    int i = 1;   // initialization
    while (i <= n)   // condition
    {
        cout << i << " ";
        i++;   // increment
    }

    // 3️⃣ DO-WHILE LOOP
  
    cout << "\n\nUsing DO-WHILE loop:\n";

    int j = 1;   // initialization
    do
    {
        cout << j << " ";
        j++;   // increment
    }
    while (j <= n);   // condition checked after execution

    cout << "\n\nProgram finished successfully.\n";

    return 0;
}
