//Find product of odd numbers from 1 to 15
#include<iostream>
int main()
{
    unsigned int product=1;

    for ( int i = 3; i <= 15; i+=2)
    {
        product*= i;
    }// end for
    
    std::cout<<"Product of integers from 1 to 15: "<<product<<std::endl;

    std::cin.get();
}
