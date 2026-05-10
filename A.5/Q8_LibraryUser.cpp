#include <iostream>
using namespace std;

class LibraryUser
{
public:
    string name, id, contact;

    void get()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter contact: ";
        cin >> contact;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Student : public LibraryUser
{
public:
    int grade;

    void get2()
    {
        get();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void show2()
    {
        show();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser
{
public:
    string dept;

    void get2()
    {
        get();
        cout << "Enter department: ";
        cin >> dept;
    }

    void show2()
    {
        show();
        cout << "Department: " << dept << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "Student info:" << endl;
    s.get2();
    s.show2();

    cout << "Teacher info:" << endl;
    t.get2();
    t.show2();

    return 0;
}
