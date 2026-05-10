#include <iostream>
using namespace std;

class SafeArray
{
    int arr[10];
    int size;

public:
    SafeArray(int s)
    {
        size = s;
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }

    int &operator[](int i)
    {
        if (i < 0 || i >= size)
        {
            cout << "Index " << i << " out of bounds!" << endl;
            exit(1);
        }
        return arr[i];
    }
};

int main()
{
    SafeArray a(5);

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;

    cout << "Accessing a[7]:" << endl;
    cout << a[7] << endl;

    return 0;
}
