#include <iostream>
using namespace std;

class Box
{
public:
    int len;

    Box(int l)
    {
        len = l;
    }

    void show()
    {
        cout << "Length: " << len << endl;
    }
};

Box doubleByValue(Box b)
{
    b.len *= 2;
    return b;
}

Box *doubleByAddress(Box *b)
{
    b->len *= 2;
    return b;
}

int main()
{
    Box b1(5);

    cout << "Original: ";
    b1.show();

    Box b2 = doubleByValue(b1);
    cout << "After pass-by-value: ";
    b2.show();

    cout << "Original unchanged: ";
    b1.show();

    Box *ptr = doubleByAddress(&b1);
    cout << "After pass-by-address: ";
    ptr->show();

    return 0;
}
