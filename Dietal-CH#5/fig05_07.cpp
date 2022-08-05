// do...while repetition statement.
#include<iostream>
int main()
{
    unsigned int counter{1}; //Initilaize counter

    do
    {
        std::cout<<counter<<" "; //Display counter
        ++counter; //Increment operator
    } while (counter<=69); // end do..while 
    std::cout<<std::endl; //print new line
    
}