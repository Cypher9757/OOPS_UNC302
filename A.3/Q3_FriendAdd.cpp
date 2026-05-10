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

    friend int addData(A, B);
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

    friend int addData(A, B);
};

int addData(A a, B b)
{
    return a.x + b.y;
}

int main()
{
    A a(15);
    B b(25);

    cout << "Sum: " << addData(a, b) << endl;

    return 0;
}
