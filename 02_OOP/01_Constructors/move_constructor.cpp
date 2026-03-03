
#include <iostream>
using namespace std;

class Data {
    int* ptr;
public:
    Data(int v){ ptr = new int(v); }
    Data(Data&& d){ ptr = d.ptr; d.ptr = nullptr; }
    ~Data(){ delete ptr; }
};
