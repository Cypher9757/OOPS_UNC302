#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;

    cout << (n % 2 == 0 ? "Even (conditional)" : "Odd (conditional)") << endl;

    return 0;
}
