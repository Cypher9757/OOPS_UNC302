#include <iostream>
using namespace std;

// Single Inheritance
class A
{
public:
    void a()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void b()
    {
        cout << "B" << endl;
    }
};

// Multiple Inheritance
class C
{
public:
    void c()
    {
        cout << "C" << endl;
    }
};

class D : public A, public C
{
public:
    void d()
    {
        cout << "D" << endl;
    }
};

// Multilevel Inheritance
class E : public B
{
public:
    void e()
    {
        cout << "E" << endl;
    }
};

// Hierarchical Inheritance
class F : public A
{
public:
    void f()
    {
        cout << "F" << endl;
    }
};

// Hybrid Inheritance
class G : public D, public F
{
public:
    void g()
    {
        cout << "G" << endl;
    }
};

int main()
{
    cout << "--- Single ---" << endl;
    B b;
    b.a();
    b.b();

    cout << "--- Multiple ---" << endl;
    D d;
    d.c();
    d.d();

    cout << "--- Multilevel ---" << endl;
    E ex;
    ex.b();
    ex.e();

    cout << "--- Hierarchical ---" << endl;
    F f;
    f.a();
    f.f();

    return 0;
}
