#include <iostream>
using namespace std;

class Box
{
public:
    int side;

    Box()
    {
        side = 0;
    }

    Box(int s)
    {
        side = s;
    }

    void show()
    {
        cout << "Side: " << side << endl;
    }
};

int main()
{
    int *iptr = new int(10);
    cout << "Integer: " << *iptr << endl;
    delete iptr;

    float *fptr = new float(3.14);
    cout << "Float: " << *fptr << endl;
    delete fptr;

    int *iarr = new int[5];
    for (int i = 0; i < 5; i++)
        iarr[i] = i + 1;
    cout << "Integer array: ";
    for (int i = 0; i < 5; i++)
        cout << iarr[i] << " ";
    cout << endl;
    delete[] iarr;

    float *farr = new float[3];
    farr[0] = 1.1;
    farr[1] = 2.2;
    farr[2] = 3.3;
    cout << "Float array: ";
    for (int i = 0; i < 3; i++)
        cout << farr[i] << " ";
    cout << endl;
    delete[] farr;

    Box *bptr = new Box(5);
    bptr->show();
    delete bptr;

    Box *barr = new Box[3];
    barr[0].side = 1;
    barr[1].side = 2;
    barr[2].side = 3;
    for (int i = 0; i < 3; i++)
        barr[i].show();
    delete[] barr;

    return 0;
}
