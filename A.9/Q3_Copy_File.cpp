#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f1("a.txt");
    ofstream f2("b.txt");

    char c;

    while(f1.get(c))
    {
        f2 << c;
    }

    f1.close();
    f2.close();

    cout << "Copied";
}