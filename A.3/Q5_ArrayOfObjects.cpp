#include <iostream>
using namespace std;

class Rectangle
{
    int w, h;

public:
    void get()
    {
        cout << "Enter width and height: ";
        cin >> w >> h;
    }

    void area()
    {
        cout << "Area: " << w * h << endl;
    }
};

int main()
{
    int n;

    cout << "How many rectangles? ";
    cin >> n;

    Rectangle r[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Rectangle " << i + 1 << ": ";
        r[i].get();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Rectangle " << i + 1 << " - ";
        r[i].area();
    }

    return 0;
}
