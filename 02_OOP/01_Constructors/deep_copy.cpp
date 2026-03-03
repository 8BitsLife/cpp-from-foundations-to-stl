
#include <iostream>
using namespace std;

class Deep {
    int* data;
public:
    Deep(int v){ data = new int(v); }
    Deep(const Deep &d){ data = new int(*d.data); }
    ~Deep(){ delete data; }
};
