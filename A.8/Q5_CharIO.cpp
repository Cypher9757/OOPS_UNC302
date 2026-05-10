#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);
    cout << "Length: " << len << endl;

    ofstream fout("chars.txt");
    fout << str;
    fout.close();

    cout << "Stored in file." << endl;

    char buf[100];
    ifstream fin("chars.txt");
    fin >> buf;
    fin.close();

    cout << "Fetched from file: " << buf << endl;

    return 0;
}
