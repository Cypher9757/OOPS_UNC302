#include <iostream>
#include <cmath>
using namespace std;

float area(float base, float height)
{
    return 0.5 * base * height;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

float area(float a)
{
    return (sqrt(3) / 4) * a * a;
}

int main()
{
    cout << "Right angle triangle area (base=5, height=4): " << area(5.0f, 4.0f) << endl;
    cout << "Scalene triangle area (3, 4, 5): " << area(3.0f, 4.0f, 5.0f) << endl;
    cout << "Equilateral triangle area (side=6): " << area(6.0f) << endl;

    return 0;
}
