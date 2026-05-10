#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("pointer.txt");
    fout << "Hello World";
    cout << "tellp after write: " << fout.tellp() << endl;

    fout.seekp(6);
    fout << "C++  ";
    fout.close();

    ifstream fin("pointer.txt");

    cout << "tellg at start: " << fin.tellg() << endl;

    fin.seekg(0, ios::end);
    cout << "File size (tellg at end): " << fin.tellg() << endl;

    fin.seekg(6);
    cout << "tellg after seekg(6): " << fin.tellg() << endl;

    char buf[20];
    fin >> buf;
    cout << "Read from position 6: " << buf << endl;

    fin.seekg(0);
    string line;
    getline(fin, line);
    cout << "Full file: " << line << endl;

    fin.close();

    return 0;
}
