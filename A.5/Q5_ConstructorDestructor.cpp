#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Base Constructor" << endl;
    }

    ~A()
    {
        cout << "Base Destructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Derived Constructor" << endl;
    }

    ~B()
    {
        cout << "Derived Destructor" << endl;
    }
};

int main()
{
    B x;
    return 0;
}
