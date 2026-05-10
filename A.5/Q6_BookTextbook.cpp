#include <iostream>
using namespace std;

class Book
{
public:
    string title, author;
    int price;

    void get()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book
{
public:
    string subject;

    void get2()
    {
        get();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void show2()
    {
        show();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Book b;
    Textbook t;

    cout << "Book details:" << endl;
    b.get();
    b.show();

    cout << "Textbook details:" << endl;
    t.get2();
    t.show2();

    return 0;
}
