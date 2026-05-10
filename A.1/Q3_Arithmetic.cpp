#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;

    if (b != 0)
        cout << "Division: " << a / b << endl;
    else
        cout << "Division by zero not allowed" << endl;

    return 0;
}
