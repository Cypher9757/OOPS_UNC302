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

    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(float s)
    {
        length = s;
        breadth = s;
    }

    void area()
    {
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 5);
    Rectangle r3(7);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}
