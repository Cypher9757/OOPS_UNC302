#include <iostream>
using namespace std;

class Speedometer
{
public:
    int speed;

    void setSpeed(int s)
    {
        speed = s;
    }

    void showSpeed()
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class FuelGauge
{
public:
    int fuel;

    void setFuel(int f)
    {
        fuel = f;
    }

    void showFuel()
    {
        cout << "Fuel: " << fuel << "%" << endl;
    }
};

class Thermometer
{
public:
    int temp;

    void setTemp(int t)
    {
        temp = t;
    }

    void showTemp()
    {
        cout << "Temperature: " << temp << " C" << endl;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer
{
public:
    void display()
    {
        showSpeed();
        showFuel();
        showTemp();
    }
};

int main()
{
    CarDashboard car;

    car.setSpeed(80);
    car.setFuel(60);
    car.setTemp(90);

    car.display();

    return 0;
}
