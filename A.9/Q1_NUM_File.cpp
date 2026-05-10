#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("NUM.txt");

    for(int i=1;i<=200;i++)
    {
        f << i << " ";
    }

    f.close();

    cout << "Done";
}