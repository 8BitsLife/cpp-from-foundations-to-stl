
#include <iostream>
using namespace std;

// ==========================================
// Overloading new and delete
// ==========================================

class Test
{
private:
    int value;

public:
    Test(int v) : value(v)
    {
        cout << "Constructor called\n";
    }

    ~Test()
    {
        cout << "Destructor called\n";
    }

    // Overloading new
    void* operator new(size_t size)
    {
        cout << "Custom new called. Allocating " << size << " bytes\n";
        void* ptr = malloc(size);
        return ptr;
    }

    // Overloading delete
    void operator delete(void* ptr)
    {
        cout << "Custom delete called\n";
        free(ptr);
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Test* t = new Test(100);
    t->display();
    delete t;

    return 0;
}
