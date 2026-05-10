#include <iostream>
#include <fstream>
using namespace std;

void count()
{
    ifstream f("NOTES.txt");

    char c;
    int x = 0;

    while(f.get(c))
    {
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            x++;
        }
    }

    cout << x;

    f.close();
}

int main()
{
    count();
}