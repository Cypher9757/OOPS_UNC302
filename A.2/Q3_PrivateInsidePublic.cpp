#include <iostream>
using namespace std;

class Demo
{
private:
    int x;

    void square()
    {
        cout << "Square: " << x * x << endl;
    }

public:
    void setX(int a)
    {
        x = a;
    }

    void show()
    {
        cout << "Value: " << x << endl;
        square();
    }
};

int main()
{
    Demo d;

    d.setX(5);
    d.show();

    return 0;
}
