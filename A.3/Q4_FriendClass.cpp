#include <iostream>
using namespace std;

class Engine
{
private:
    int hp;

public:
    Engine(int h)
    {
        hp = h;
    }

    friend class Car;
};

class Car
{
public:
    void show(Engine e)
    {
        cout << "Engine HP: " << e.hp << endl;
    }
};

int main()
{
    Engine e(200);
    Car c;

    c.show(e);

    return 0;
}
