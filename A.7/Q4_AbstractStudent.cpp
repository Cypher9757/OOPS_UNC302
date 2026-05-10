#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student(string n)
    {
        name = n;
    }

    virtual void display() = 0;
};

class Engineering : public Student
{
    string branch;

public:
    Engineering(string n, string b) : Student(n)
    {
        branch = b;
    }

    void display()
    {
        cout << "Engineering | Name: " << name << " | Branch: " << branch << endl;
    }
};

class Medicine : public Student
{
    string spec;

public:
    Medicine(string n, string s) : Student(n)
    {
        spec = s;
    }

    void display()
    {
        cout << "Medicine | Name: " << name << " | Spec: " << spec << endl;
    }
};

class Science : public Student
{
    string subject;

public:
    Science(string n, string s) : Student(n)
    {
        subject = s;
    }

    void display()
    {
        cout << "Science | Name: " << name << " | Subject: " << subject << endl;
    }
};

int main()
{
    Student *arr[3];

    arr[0] = new Engineering("Aditya", "CSE");
    arr[1] = new Medicine("Rohan", "Surgery");
    arr[2] = new Science("Priya", "Physics");

    for (int i = 0; i < 3; i++)
        arr[i]->display();

    for (int i = 0; i < 3; i++)
        delete arr[i];

    return 0;
}
