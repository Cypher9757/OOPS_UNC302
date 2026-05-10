#include <iostream>
using namespace std;

class Book
{
public:
    string title, author, ISBN;
};

class Library
{
    Book books[100];
    int count;

public:
    Library()
    {
        count = 0;
    }

    bool addNewBook(string &title, string &author, string &ISBN)
    {
        if (count >= 100)
            return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "Title: " << books[i].title
                 << ", Author: " << books[i].author
                 << ", ISBN: " << books[i].ISBN << endl;
        }
    }
};

bool Library::removeBooks(string &ISBN)
{
    for (int i = 0; i < count; i++)
    {
        if (books[i].ISBN == ISBN)
        {
            for (int j = i; j < count - 1; j++)
                books[j] = books[j + 1];
            count--;
            return true;
        }
    }
    return false;
}

int main()
{
    Library lib;

    string t1 = "C++ Primer", a1 = "Lippman", i1 = "ISBN001";
    string t2 = "DSAA", a2 = "Weiss", i2 = "ISBN002";
    string t3 = "OS Concepts", a3 = "Silberschatz", i3 = "ISBN003";
    string t4 = "DBMS", a4 = "Ramakrishnan", i4 = "ISBN004";
    string t5 = "Networks", a5 = "Tanenbaum", i5 = "ISBN005";

    lib.addNewBook(t1, a1, i1);
    lib.addNewBook(t2, a2, i2);
    lib.addNewBook(t3, a3, i3);
    lib.addNewBook(t4, a4, i4);
    lib.addNewBook(t5, a5, i5);

    cout << "All books:" << endl;
    lib.displayDetails();

    string rem = "ISBN003";
    if (lib.removeBooks(rem))
        cout << "Book removed" << endl;
    else
        cout << "Book not found" << endl;

    cout << "After removal:" << endl;
    lib.displayDetails();

    return 0;
}
