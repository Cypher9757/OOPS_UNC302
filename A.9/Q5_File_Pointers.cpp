#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("A-Z.txt");

    for(char c='A'; c<='Z'; c++)
    {
        f << c;
    }

    f.close();

    ifstream x("A-Z.txt");

    x.seekg(9);

    char a;

    x.get(a);

    cout << a << endl;

    x.seekg(0, ios::end);

    cout << x.tellg() << endl;

    x.seekg(-1, ios::end);

    x.get(a);

    cout << a << endl;

    x.close();
}