
class MyException{
public:
    const char* what() const { return "Custom Exception"; }
};
