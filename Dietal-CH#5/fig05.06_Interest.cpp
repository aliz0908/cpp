//Compound interst calculation

#include<iostream>
#include<iomanip>
#include<cmath> //for power function.
int main()
{
    
    using namespace std;
    
    double principal{1000.0};
    double rate{0.05};

    

    cout<<"intial Principal"<<principal<<endl;
    cout<<"Interest Rate"<<rate<<endl;

    //Display Headers
    cout<<"Year"<<setw( 21 ) <<"Amount on deposit"<<endl;

    //set floating point number format
    cout<< fixed <<setprecision( 2 );

    for (unsigned int year{1}; year<=10; year++)
    {
        double amount = principal * pow(1.0 + rate,year);
        
         //Display year and the amount
        cout << setw( 4 )<<year<<setw( 21 ) <<amount<<endl;
    }
    
}
