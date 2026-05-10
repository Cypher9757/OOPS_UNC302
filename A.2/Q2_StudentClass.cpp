#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void validate()
    {
        if (cgpa < 0 || cgpa > 10)
            cgpa = 0;
    }

public:
    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
        validate();
    }

    void updateDetails()
    {
        cout << "Enter new name: ";
        cin >> name;
        cout << "Enter new degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
        validate();
    }

    void updateHostel()
    {
        cout << "Enter new hostel: ";
        cin >> hostel;
    }

    void displaydetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displaydetails();

    s.updateCGPA();
    s.displaydetails();

    return 0;
}
