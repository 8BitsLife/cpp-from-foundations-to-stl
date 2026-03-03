
class Num{
    int val;
public:
    Num(int v):val(v){}
    Num& operator++(){ ++val; return *this; }
};
