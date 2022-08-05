#include<iostream>
int main()
{
    unsigned int count{1};

    while (count<=10)
    {
        std::cout << ( count % 2 ? "****" : "++++++++" ) <<std::endl;
        count++;
    }
    
}