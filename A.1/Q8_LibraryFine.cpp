#include <iostream>
using namespace std;

int main()
{
    int days;

    cout << "Enter number of days late: ";
    cin >> days;

    if (days > 30)
    {
        cout << "Membership cancelled" << endl;
    }
    else if (days > 10)
    {
        cout << "Fine: Rs. " << days * 5 << endl;
    }
    else if (days > 5)
    {
        cout << "Fine: Rs. " << days * 1 << endl;
    }
    else if (days > 0)
    {
        cout << "Fine: Rs. " << days * 0.50 << endl;
    }
    else
    {
        cout << "No fine" << endl;
    }

    return 0;
}
