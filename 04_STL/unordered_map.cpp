#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> marks;

    marks["Math"] = 90;
    marks["Physics"] = 85;
    marks["Chemistry"] = 88;

    cout << "Subject Marks:\n";
    for (auto pair : marks)
    {
        cout << pair.first 
             << " : " << pair.second << endl;
    }

    return 0;
}
