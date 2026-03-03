
class Num{
    int val;
public:
    Num(int v):val(v){}
    Num operator+(Num n){ return Num(val+n.val); }
};
