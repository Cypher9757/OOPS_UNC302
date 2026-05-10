#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("source.txt");
    fout << "This is the source file." << endl;
    fout << "It has multiple lines." << endl;
    fout.close();

    ifstream fin("source.txt");
    ofstream fcopy("copy.txt");

    char ch;
    while (fin.get(ch))
        fcopy.put(ch);

    fin.close();
    fcopy.close();

    cout << "File copied successfully" << endl;

    ifstream fread("copy.txt");
    string line;
    while (getline(fread, line))
        cout << line << endl;
    fread.close();

    return 0;
}
