#include <iostream>
using namespace std;

int x = 100;

class Demo
{
public:
    static int count;
    int x;

    void setX(int a)
    {
        x = a;
    }

    void show();
};

int Demo::count = 0;

void Demo::show()
{
    int x = 10;
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;
    cout << "Object x: " << this->x << endl;
    cout << "Static count: " << Demo::count << endl;
}

namespace A
{
    void greet()
    {
        std::cout << "Hello from A" << std::endl;
    }
}

int main()
{
    Demo d;
    d.setX(50);
    d.show();

    A::greet();

    return 0;
}
