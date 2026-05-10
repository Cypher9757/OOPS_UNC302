#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello\tWorld\n";
    cout << "Tab\there" << endl;
    cout << "Back\bspace" << endl;
    cout << setw(10) << "Right" << endl;
    cout << setw(10) << 12345 << endl;

    return 0;
}
