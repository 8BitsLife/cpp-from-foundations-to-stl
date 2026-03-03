
#include <iostream>
using namespace std;

class Shallow {
    int* data;
public:
    Shallow(int v){ data = new int(v); }
    Shallow(const Shallow &s){ data = s.data; }
    ~Shallow(){ delete data; }
};
