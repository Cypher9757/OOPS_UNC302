#include <iostream>
using namespace std;

class Test
{
private:
    float val;

public:
    Test(float f)
    {
        val = f;
        cout << "Converted float " << f << " to Test object" << endl;
    }

    void show()
    {
        cout << "Value: " << val << endl;
    }
};

int main()
{
    float f = 3.14;

    Test t = f;
    t.show();

    return 0;
}
