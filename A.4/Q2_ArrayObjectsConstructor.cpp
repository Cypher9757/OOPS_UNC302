#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(float l, float b = 1)
    {
        length = l;
        breadth = b;
    }

    ~Rectangle()
    {
        cout << "Destructor called for " << length << " x " << breadth << endl;
    }

    void area()
    {
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r[3] = {Rectangle(), Rectangle(10, 5), Rectangle(7)};

    for (int i = 0; i < 3; i++)
    {
        cout << "Rectangle " << i + 1 << " - ";
        r[i].area();
    }

    return 0;
}
