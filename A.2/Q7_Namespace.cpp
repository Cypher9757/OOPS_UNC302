#include <iostream>
using namespace std;

namespace Physics
{
    float speed = 100.0;

    void display()
    {
        cout << "Physics speed: " << speed << endl;
    }
}

namespace Chemistry
{
    float speed = 50.0;

    void display()
    {
        cout << "Chemistry speed: " << speed << endl;
    }
}

int main()
{
    Physics::display();
    Chemistry::display();

    cout << "Physics speed: " << Physics::speed << endl;
    cout << "Chemistry speed: " << Chemistry::speed << endl;

    return 0;
}
