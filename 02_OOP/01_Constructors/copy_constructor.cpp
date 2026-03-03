
#include <iostream>
using namespace std;

class Box {
    int value;
public:
    Box(int v):value(v){}
    Box(const Box &b){ value = b.value; }
};
