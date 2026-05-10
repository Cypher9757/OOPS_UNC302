#include <iostream>
using namespace std;

class Book
{
public:
    string title, author, ISBN;

    Book()
    {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(string title, string author, string ISBN)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(Book &b)
    {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library
{
    Book *books;
    int count, capacity;

public:
    Library(int cap = 100)
    {
        this->capacity = cap;
        this->count = 0;
        this->books = new Book[cap];
    }

    ~Library()
    {
        delete[] books;
    }

    bool addNewBook(string &title, string &author, string &ISBN)
    {
        if (this->count >= this->capacity)
            return false;

        this->books[this->count] = Book(title, author, ISBN);
        this->count++;
        return true;
    }

    bool removeBooks(string &ISBN)
    {
        for (int i = 0; i < this->count; i++)
        {
            if (this->books[i].ISBN == ISBN)
            {
                for (int j = i; j < this->count - 1; j++)
                    this->books[j] = this->books[j + 1];
                this->count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails()
    {
        for (int i = 0; i < this->count; i++)
        {
            cout << "Title: " << this->books[i].title
                 << ", Author: " << this->books[i].author
                 << ", ISBN: " << this->books[i].ISBN << endl;
        }
    }
};

int main()
{
    Library lib(10);

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

    string rem = "ISBN002";
    if (lib.removeBooks(rem))
        cout << "Book removed" << endl;

    cout << "After removal:" << endl;
    lib.displayDetails();

    return 0;
}
