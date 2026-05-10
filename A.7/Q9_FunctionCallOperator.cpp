#include <iostream>
using namespace std;

class Calc
{
public:
    int operator()(int a)
    {
        return a * a;
    }

    int operator()(int a, int b)
    {
        return a + b;
    }

    int operator()(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calc c;

    cout << "c(5) = " << c(5) << endl;
    cout << "c(3, 4) = " << c(3, 4) << endl;
    cout << "c(1, 2, 3) = " << c(1, 2, 3) << endl;

    return 0;
}
