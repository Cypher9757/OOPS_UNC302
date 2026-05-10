#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float r, float i)
    {
        this->real = r;
        this->imag = i;
    }

    Complex(Complex &c)
    {
        this->real = c.real;
        this->imag = c.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2)
{
    Complex res(c1.real + c2.real, c1.imag + c2.imag);
    cout << "Sum: ";
    res.display();
}

int main()
{
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    cout << "C1: ";
    c1.display();

    cout << "C2: ";
    c2.display();

    sum(c1, c2);

    return 0;
}
