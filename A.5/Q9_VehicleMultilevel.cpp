#include <iostream>
using namespace std;

class Vehicle
{
public:
    string make, model;
    int year;

    void get()
    {
        cout << "Enter make: ";
        cin >> make;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    void show()
    {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Truck : public Vehicle
{
public:
    float load_capacity;

    void get2()
    {
        get();
        cout << "Enter load capacity (tons): ";
        cin >> load_capacity;
    }

    void show2()
    {
        show();
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

class RefrigeratedTruck : public Truck
{
public:
    int temperature_control;

    void get3()
    {
        get2();
        cout << "Enter temperature control (C): ";
        cin >> temperature_control;
    }

    void show3()
    {
        show2();
        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main()
{
    RefrigeratedTruck rt;

    rt.get3();
    rt.show3();

    return 0;
}
