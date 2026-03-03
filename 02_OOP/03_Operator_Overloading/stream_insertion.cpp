
#include <iostream>
using namespace std;

class Num{
    int val;
public:
    Num(int v):val(v){}
    friend ostream& operator<<(ostream& out, Num n){
        out << n.val;
        return out;
    }
};
