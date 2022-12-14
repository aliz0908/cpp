// Compound interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // standard math library
using namespace std;
int main()
{
    double amount; // amount on deposit at end of each year
 double principal = 1000.0; // initial amount before interest
 double rate = .05; // annual interest rate

 // display headers
cout << "Year" << setw( 21 )<< "Amount on deposit" << endl;

 // set floating-point number format
 cout << fixed << setprecision( 2 );
 // calculate amount on deposit for each of ten years
for ( unsigned int year = 1; year <= 10; ++year )
{
// calculate new amount for specified year
amount = principal * pow( 1.0 + rate, year );
// display the year and the amount
cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
} // end for
 } // end main