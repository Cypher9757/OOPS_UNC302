#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    A()
    {
        x = 10;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    B b;
    b.show();

    return 0;
}
