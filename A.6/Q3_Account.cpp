#include <iostream>
using namespace std;

class Account
{
    const long accNo;
    long txnID;
    string txnType;
    double balance;

public:
    Account(long no, double bal) : accNo(no)
    {
        txnID = 1000;
        balance = bal;
        txnType = "Initial";
    }

    long depositAmount(const long &to, const long &from, const double &amount)
    {
        if (accNo == to)
        {
            balance += amount;
            txnType = "Credit";
        }
        txnID++;
        return txnID;
    }

    long creditAmount(const long &to, const long &from, const double &amount)
    {
        if (accNo == from)
        {
            if (balance >= amount)
            {
                balance -= amount;
                txnType = "Debit";
            }
            else
            {
                cout << "Insufficient balance in account " << accNo << endl;
            }
        }
        txnID++;
        return txnID;
    }

    void displayDetails() const
    {
        cout << "Account: " << accNo
             << " | Balance: " << balance
             << " | Last Txn: " << txnType
             << " | Txn ID: " << txnID << endl;
    }
};

int main()
{
    Account a1(1001, 5000);
    Account a2(1002, 3000);
    Account a3(1003, 7000);
    Account a4(1004, 2000);
    Account a5(1005, 9000);

    a1.depositAmount(1001, 1002, 1500);
    a2.creditAmount(1001, 1002, 1500);

    a3.depositAmount(1003, 1004, 2000);
    a4.creditAmount(1003, 1004, 2000);

    a5.depositAmount(1005, 1001, 500);
    a1.creditAmount(1005, 1001, 500);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
