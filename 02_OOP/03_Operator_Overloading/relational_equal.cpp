
class Num{
    int val;
public:
    Num(int v):val(v){}
    bool operator==(Num n){ return val==n.val; }
};
