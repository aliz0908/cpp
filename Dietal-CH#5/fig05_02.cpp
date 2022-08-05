// Counter-controlled repetition with the for statement.

#include<iostream>
int main()
{
    //For statement header include initialization
    //loop-continuation increament and condition
    for (unsigned int counter{1}; counter<=10; ++counter)
    {
        std::cout<<counter<<" ";
    }
    std::cout<<std::endl;

    std::cin.get();
}//end main