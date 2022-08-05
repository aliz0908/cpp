//Store Credit Limit
#include <iostream>
using namespace std;
int main()
{
int ac;
double Balance, charges, Credit, Limit, Total_charges;
int NB;

cout << "Enter account number or -1 to exit" << endl;
cin >> ac;
while (ac != -1)
{
cout << "Enter initial balance: " << endl;
cin >> Balance;

cout << "Charges this transaction: " << endl;
cin >> charges;

cout << "Total credit: " << endl;
cin >> Credit;

cout << "Credit limit: " << endl;
cin >> Limit;


NB = (Balance+charges)-Credit;

std::cout<<"New Balance:"<<NB<<std::endl;

cout << "Enter account number or -1 to exit" << endl;
cin >> ac;




if (NB > Limit)
{
cout << "You have exceeded your credit limit! New Balance: " << NB << endl;



}
}
system("pause");
return 0;
}