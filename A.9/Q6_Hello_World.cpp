#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f("data.txt", ios::out | ios::in);

    string s = "Hello World";

    for(int i=0;i<s.length();i++)
    {
        f << s[i];

        cout << f.tellp() << endl;
    }

    f.seekp(6);

    f << "C++";

    f.close();

    cout << "Done";
}