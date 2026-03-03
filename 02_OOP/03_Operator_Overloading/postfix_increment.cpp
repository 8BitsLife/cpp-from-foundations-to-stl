
class Num{
    int val;
public:
    Num(int v):val(v){}
    Num operator++(int){ Num temp=*this; val++; return temp; }
};
