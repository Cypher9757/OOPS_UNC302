#include <iostream>
using namespace std;

class Base
{
public:
    int pub;

protected:
    int prot;

private:
    int priv;

public:
    Base()
    {
        pub = 1;
        prot = 2;
        priv = 3;
    }
};

class PublicDerived : public Base
{
public:
    void show()
    {
        cout << "Public inheritance:" << endl;
        cout << "pub (public): " << pub << endl;
        cout << "prot (protected): " << prot << endl;
    }
};

class ProtectedDerived : protected Base
{
public:
    void show()
    {
        cout << "Protected inheritance:" << endl;
        cout << "pub (protected now): " << pub << endl;
        cout << "prot (protected): " << prot << endl;
    }
};

class PrivateDerived : private Base
{
public:
    void show()
    {
        cout << "Private inheritance:" << endl;
        cout << "pub (private now): " << pub << endl;
        cout << "prot (private now): " << prot << endl;
    }
};

int main()
{
    PublicDerived pd;
    pd.show();
    cout << "Direct access pub: " << pd.pub << endl;

    ProtectedDerived prd;
    prd.show();

    PrivateDerived privd;
    privd.show();

    return 0;
}
