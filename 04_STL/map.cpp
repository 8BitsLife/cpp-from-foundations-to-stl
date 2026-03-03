#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "Alice";
    students[2] = "Bob";
    students[3] = "Charlie";

    cout << "Student List:\n";
    for (auto pair : students)
    {
        cout << "Roll No: " << pair.first 
             << " Name: " << pair.second << endl;
    }

    return 0;
}
