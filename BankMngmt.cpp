#include <iostream>
#include <string>
#include <cstring> 
using namespace std;

struct Bank
{
    int acno;
    char name[7];
    long balance;

    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int main()
{
    struct Bank C;
    C.acno = 123;
    C.balance = 1000;
    string myStr = "Yousaf";
    Bank mStr;
    strcpy(mStr.name, myStr.c_str());
    
int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        C.OpenAccount();
    }

    do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // displating account info
            for (i = 0; i <= 2; i++) {
                C.ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C.Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C.Search(a);
                if (found) {
                    C.Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C.Search(a);
                if (found) {
                    C.Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}
