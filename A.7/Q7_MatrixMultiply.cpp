#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    int rows, cols;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                a[i][j] = 0;
    }

    void get()
    {
        cout << "Enter " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }

    void show()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix, Matrix);
};

Matrix operator*(Matrix m1, Matrix m2)
{
    Matrix res(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; i++)
        for (int j = 0; j < m2.cols; j++)
            for (int k = 0; k < m1.cols; k++)
                res.a[i][j] += m1.a[i][k] * m2.a[k][j];
    return res;
}

int main()
{
    Matrix m1(2, 2), m2(2, 2);

    m1.get();
    m2.get();

    Matrix m3 = m1 * m2;

    cout << "Result:" << endl;
    m3.show();

    return 0;
}
