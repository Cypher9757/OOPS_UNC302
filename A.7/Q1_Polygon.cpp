#include <iostream>
using namespace std;

class Polygon
{
public:
    int width, height;

    void set_value(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual float calculate_area()
    {
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    float calculate_area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    float calculate_area()
    {
        return 0.5 * width * height;
    }
};

int main()
{
    Polygon *ptr;

    Rectangle r;
    Triangle t;

    ptr = &r;
    ptr->set_value(5, 3);
    cout << "Rectangle area: " << ptr->calculate_area() << endl;

    ptr = &t;
    ptr->set_value(5, 3);
    cout << "Triangle area: " << ptr->calculate_area() << endl;

    return 0;
}
