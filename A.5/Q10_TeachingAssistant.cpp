#include <iostream>
using namespace std;

class Person
{
public:
    string name, address;

    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Staff : virtual public Person
{
public:
    string emp_id, dept;

    void getStaff()
    {
        getPerson();
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter department: ";
        cin >> dept;
    }

    void showStaff()
    {
        showPerson();
        cout << "Emp ID: " << emp_id << endl;
        cout << "Department: " << dept << endl;
    }
};

class Student : virtual public Person
{
public:
    string stu_id, grade;

    void getStudent()
    {
        getPerson();
        cout << "Enter student ID: ";
        cin >> stu_id;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showStudent()
    {
        showPerson();
        cout << "Student ID: " << stu_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

class TeachingAssistant : public Staff, public Student
{
public:
    void getTA()
    {
        getPerson();
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter department: ";
        cin >> dept;
        cout << "Enter student ID: ";
        cin >> stu_id;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showTA()
    {
        showPerson();
        cout << "Emp ID: " << emp_id << endl;
        cout << "Department: " << dept << endl;
        cout << "Student ID: " << stu_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    TeachingAssistant ta;

    ta.getTA();
    ta.showTA();

    return 0;
}
