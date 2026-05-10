#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void setComplex(float r, float i)
    {
        real = r;
        imag = i;
    }

    void displayComplex()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setComplex(3.0, 4.0);
    c2.setComplex(1.5, 2.5);

    c3 = c1.add(c2);

    cout << "C1: ";
    c1.displayComplex();

    cout << "C2: ";
    c2.displayComplex();

    cout << "Sum: ";
    c3.displayComplex();

    return 0;
}
