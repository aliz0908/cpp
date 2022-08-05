// x raised  to the y power.
//using while loop
#include<iostream>
int main()
{
    unsigned int i{1}; //integer
    unsigned int power{1}; //power
    
    std::cout<<"Enter a base integer:"<<std::endl;
    unsigned int x;
    std::cin>>x;

    std::cout<<"Enter exponent: ";
    unsigned int y;
    std::cin>>y;

    while (i<=y)
    {
        power*=x;
        i++;
    }
    std::cout<<"Power="<<power<<std::endl;
    std::cin.get();
    
}