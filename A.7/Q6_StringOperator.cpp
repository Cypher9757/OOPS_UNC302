#include <iostream>
using namespace std;

class STRING
{
    char str[100];

public:
    STRING()
    {
        str[0] = '\0';
    }

    STRING(const char *s)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';
    }

    bool operator==(STRING s)
    {
        int i = 0;
        while (str[i] != '\0' && s.str[i] != '\0')
        {
            if (str[i] != s.str[i])
                return false;
            i++;
        }
        return str[i] == s.str[i];
    }

    STRING operator+(STRING s)
    {
        STRING res;
        int i = 0, j = 0;
        while (str[i] != '\0')
        {
            res.str[i] = str[i];
            i++;
        }
        while (s.str[j] != '\0')
        {
            res.str[i] = s.str[j];
            i++;
            j++;
        }
        res.str[i] = '\0';
        return res;
    }

    void show()
    {
        cout << str << endl;
    }
};

int main()
{
    STRING s1("Hello");
    STRING s2("World");
    STRING s3("Hello");

    cout << "S1: ";
    s1.show();

    cout << "S2: ";
    s2.show();

    if (s1 == s3)
        cout << "S1 == S3: true" << endl;
    else
        cout << "S1 == S3: false" << endl;

    if (s1 == s2)
        cout << "S1 == S2: true" << endl;
    else
        cout << "S1 == S2: false" << endl;

    STRING s4 = s1 + s2;
    cout << "S1 + S2: ";
    s4.show();

    return 0;
}
