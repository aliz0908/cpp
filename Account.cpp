#include <iostream>
#include <string>
using namespace std;
    class Account
    {
        private: 
        double balance = 100000;


        public:
        Account()
        {
            cout<<balance;
        }
        string name;
        
        double account, final_Amt;
        double withdraw, dep, total;

        void credit()
        {
            int bal;
            bal = balance;
            cout<<"Enter Name of the depositor :";
            cin>>name;
            cout<<"Enter Account Number  :";
            cin>>account;
            cout<<"Enter Credit Amount :";
            cin>>dep;
            total = bal + dep;

            cout<<"Name of the depositor : " << name<<endl;
            cout<<"Account Number: " << account<<endl;
            cout<<"Total Balance amount in the account  : " <<total<<endl;

        }
        void debit()
        {
            int bal;
            bal = balance;
            cout<<"Enter Account Name :";
            cin>>name;
            cout<<"Enter Account Number  :";
            cin>>account;
            cout<<"Enter Withdraw Amount :";
            cin>>withdraw;
            if (withdraw <= bal)
            {
                total = bal - withdraw;
                
                cout<<"Account Name : " << name;
                cout<<"Account Number: " << account;
                cout<<"After Withdraw balnace Amount is : " << total;
            }
                else
                {
                cout<<"\n\nWithdraw Ammount does not Exist your Account.";
                }
            
            
        }

    };
    class CreditCardAccount : Account
    {
        
        public:
	    Credit_Card();
        int pin;
        cout<<"Enter pin";
        cin>>pin;
        
        void resetPin(){
            cout<<"Enter New pin";
            int pin_;
            cin>>pin_;
            pin_=pin;
        }
	

	~Credit_Card();

    };
    class CheckingAccount : CreditCardAccount
    {
        double fee_per = 15;
        public void fee()
        {
            cout<<"Balance After Transection Charges : " << (total - fee_per);
        }

    };
int main()
{
    Account obj;
    obj.credit();
    obj.debit()

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     