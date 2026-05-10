#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    Time operator+(Time t)
    {
        Time res;
        res.s = s + t.s;
        res.m = m + t.m + res.s / 60;
        res.s %= 60;
        res.h = h + t.h + res.m / 60;
        res.m %= 60;
        return res;
    }

    void show()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    Time t1(5, 15, 34), t2(9, 53, 58), t3;

    t3 = t1 + t2;
    t3.show();

    return 0;
}
