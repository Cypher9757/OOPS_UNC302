#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    friend istream &operator>>(istream &in, Student &s)
    {
        in >> s.name >> s.roll;
        return in;
    }

    friend ostream &operator<<(ostream &out, Student &s)
    {
        out << "Name: " << s.name << ", Roll: " << s.roll;
        return out;
    }
};

int main()
{
    Student s;

    cout << "Enter name and roll: ";
    cin >> s;

    cout << s << endl;

    return 0;
}
