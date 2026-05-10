#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area()
    {
        return 0;
    }

    virtual void display()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
    float r;

public:
    Circle(float r)
    {
        this->r = r;
    }

    float area()
    {
        return 3.14 * r * r;
    }

    void display()
    {
        cout << "Circle, radius = " << r << ", area = " << area() << endl;
    }
};

class Rectangle : public Shape
{
    float w, h;

public:
    Rectangle(float w, float h)
    {
        this->w = w;
        this->h = h;
    }

    float area()
    {
        return w * h;
    }

    void display()
    {
        cout << "Rectangle, width = " << w << ", height = " << h << ", area = " << area() << endl;
    }
};

class Triangle : public Shape
{
    float b, h;

public:
    Triangle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }

    float area()
    {
        return 0.5 * b * h;
    }

    void display()
    {
        cout << "Triangle, base = " << b << ", height = " << h << ", area = " << area() << endl;
    }
};

int main()
{
    Shape *s[3];

    s[0] = new Circle(5);
    s[1] = new Rectangle(4, 6);
    s[2] = new Triangle(3, 8);

    for (int i = 0; i < 3; i++)
        s[i]->display();

    for (int i = 0; i < 3; i++)
        delete s[i];

    return 0;
}
