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

    friend int add(A, B);
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

    friend int add(A, B);
};

int add(A a, B b)
{
    return a.x + b.y;
}

int main()
{
    A a(30);
    B b(20);

    cout << "Sum: " << add(a, b) << endl;

    return 0;
}
