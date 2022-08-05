//Sum of integers from 1 to 10
#include<iostream>

int main()
{
    unsigned int sum{0};
    unsigned int x{1};

    while (x<=10)
    {
        sum += x;
        
        std::cout<<"Sum ="<<sum<<std::endl;
        ++x;
    }
    
}