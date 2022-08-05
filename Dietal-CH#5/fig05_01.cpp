//Counter Controlled Repitations
#include<iostream>
int main()
{
    unsigned int counter{0}; //Declare and initilize controlled variable
    
    while (++ counter<=10) //loop continuation condition
    {
        std::cout<<counter<<" ";
        
    } //end while
    
    std::cout<<std::endl; //output a new line

    std::cin.get();
} //end main