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
    }

    operator float()
    {
        return val;
    }
};

int main()
{
    Test t(9.81);

    float f = t;

    cout << "Converted Test to float: " << f << endl;

    return 0;
}
