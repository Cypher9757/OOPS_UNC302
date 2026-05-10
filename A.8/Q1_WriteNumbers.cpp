#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("NUM.TXT");

    for (int i = 1; i <= 200; i++)
        fout << i << "\n";

    fout.close();

    cout << "Numbers 1 to 200 written to NUM.TXT" << endl;

    return 0;
}
