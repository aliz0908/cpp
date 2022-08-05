#include "Graphs.h"
#include <iostream>
using namespace std;
void Graphs::drawBarGraphs()
{
    int number;
    
    cout<<"Enter 5 numbers: "<<endl;
    for (int i = 1; i <= 5; i++)
    {
        cin>>number;

        if (number>30)
        {
            cout<<"Please enter valid value!";
        }
        

        for (int j = 1; j <= number; j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
    
    cout<<endl;
}

int main()
{
    Graphs application;
    application.drawBarGraphs();
    return 0;
}