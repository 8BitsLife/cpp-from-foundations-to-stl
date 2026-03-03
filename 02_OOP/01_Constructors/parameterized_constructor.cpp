
#include <iostream>
using namespace std;

class Student {
    string name;
public:
    Student(string n) : name(n) {}
    void display(){ cout << name << endl; }
};
