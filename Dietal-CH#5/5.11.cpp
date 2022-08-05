//Calculating compound interest with interest rates
#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
    using namespace std;

    double amount;
    double principal{1000.0};

    cout<<fixed<<setprecision( 2 );

    for (int rate = 5; rate <= 10; rate++)
    {
        //Display table headers
        cout<<"Interest Rate: "<<rate<<"%"
        <<"\nYear\tAmount on Deposit\n";

        //Claculate amount of Deposit foreach of ten years
        for (int year = 1; year <= 10; year++)
        {
            //calculate new amount for specified year
            amount= principal*pow(1+(rate/100.0),year);

            //output one table row
            cout<<year<<'\t'<<amount<<'\n';   
        }//end for
        cout<<'\n';
    }//end for
    cout<<endl;
    cin.get();
}//end main 