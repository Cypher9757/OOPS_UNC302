#include <iostream>
using namespace std;

class B;

class A
{
private:
    int x;

public:
    A(int a)
    {
        x = a;
    }

    void show()
    {
        cout << "A: " << x << endl;
    }

    friend void swapValues(A &, B &);
};

class B
{
private:
    int y;

public:
    B(int b)
    {
        y = b;
    }

    void show()
    {
        cout << "B: " << y << endl;
    }

    friend void swapValues(A &, B &);
};

void swapValues(A &a, B &b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
    A a(10);
    B b(20);

    cout << "Before swap:" << endl;
    a.show();
    b.show();

    swapValues(a, b);

    cout << "After swap:" << endl;
    a.show();
    b.show();

    return 0;
}
