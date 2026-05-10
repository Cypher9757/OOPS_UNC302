#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void test()
{
    Demo d;
    cout << "Inside function" << endl;
}

int main()
{
    cout << "Creating object in main" << endl;
    Demo a;

    cout << "Calling function" << endl;
    test();

    cout << "Back in main" << endl;

    return 0;
}
