#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float cgpa;

    void get()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void show()
    {
        cout << "Name: " << name << ", Roll: " << roll << ", CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1;
    s1.get();

    ofstream fout("student.dat", ios::binary);
    fout.write((char *)&s1, sizeof(s1));
    fout.close();

    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char *)&s2, sizeof(s2));
    fin.close();

    cout << "Read from file:" << endl;
    s2.show();

    return 0;
}
