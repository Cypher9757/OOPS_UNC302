#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    void show()
    {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
    }
};

int main()
{
    Student s;
    s.name = "Aditya";
    s.roll = 101;

    s.show();

    Student *ptr = &s;

    cout << "Using dot: " << s.name << endl;
    cout << "Using arrow: " << ptr->name << endl;

    ptr->show();

    return 0;
}
