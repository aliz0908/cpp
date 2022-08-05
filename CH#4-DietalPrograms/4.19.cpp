#include < cstdio>
#include < cstdlib>
#include <iostream>
using namespace std;
int main()
{

int counter = 1;
int largest = 0;
int largest2 = 0;
int number;

while( counter <= 10)
{
cout << "Enter number: ";
cin >> number;
if( (number > largest) &amp; &amp; (number > largest2) )
{
largest = largest2;
largest2 = number;

}
else 
if( (number > largest) &amp; &amp; (number < largest2) )
{
largest = number;
}
cout << "Largest two numbers are " << largest << " and " << largest2 << endl;
counter++;
}
cout << "Largest two numbers are " << largest << " and " << largest2 << endl;
//for pause
system("PAUSE") ;
return 0;
}
