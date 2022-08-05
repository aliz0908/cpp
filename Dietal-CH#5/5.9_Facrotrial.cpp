//Factorial of numbers 1 to 5
#include<iostream>
int main()
{
    unsigned int factorial=1;

    //display table headers
    std::cout<<"x\tx!\n";

    for (int i = 1; i <= 5; i++)
    {
        factorial*=i; //i!
        //show values in table
        std::cout<<i<<'\t'<<factorial<<'\n';
    }//end for
    std::cout<<std::endl;
    std::cin.get();
}//end main