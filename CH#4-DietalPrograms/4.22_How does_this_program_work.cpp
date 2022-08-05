#include<iostream>
int main()
{
    unsigned row{10};

    while (row>=1)
    {
        unsigned coloumn{1};
           
        while (coloumn<=10)
        {
            std::cout<< (row % 2? "<" : ">");

            ++coloumn;
        }
        --row;

        std::cout<<std::endl;
    }
    
}
