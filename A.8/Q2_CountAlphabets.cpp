#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets()
{
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    if (!fin)
    {
        cout << "File not found" << endl;
        return;
    }

    while (fin.get(ch))
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            count++;
    }

    fin.close();

    cout << "Number of alphabets: " << count << endl;
}

int main()
{
    ofstream fout("NOTES.TXT");
    fout << "Hello World 123! This is a test file." << endl;
    fout.close();

    countAlphabets();

    return 0;
}
