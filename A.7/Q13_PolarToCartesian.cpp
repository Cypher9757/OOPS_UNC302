#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar
{
    float r, theta;

public:
    Polar(float r, float theta)
    {
        this->r = r;
        this->theta = theta;
    }

    operator Cartesian();

    void show()
    {
        cout << "Polar: r=" << r << ", theta=" << theta << endl;
    }
};

class Cartesian
{
    float x, y;

public:
    Cartesian(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        cout << "Cartesian: x=" << x << ", y=" << y << endl;
    }
};

Polar::operator Cartesian()
{
    float x = r * cos(theta);
    float y = r * sin(theta);
    return Cartesian(x, y);
}

int main()
{
    Polar p(10, 5);
    p.show();

    Cartesian c = p;
    c.show();

    return 0;
}
