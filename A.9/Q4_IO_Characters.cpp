#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];

    cin.getline(s,100);

    cout << strlen(s) << endl;

    ofstream f("data.txt");

    f << s;

    f.close();

    ifstream x("data.txt");

    char c;

    while(x.get(c))
    {
        cout << c;
    }

    x.close();
}