// Preincrementing and postincrementing.
#include<iostream>

int main()
{
    int c{5};
    //postincrement
    std::cout<<c<<std::endl;
    std::cout<<c++<<std::endl;
    std::cout<<c<<std::endl;

    std::cout<<std::endl;

    //preincrement
    c=5;
    std::cout<<c<<std::endl;
    std::cout<<++c<<std::endl;
    std::cout<<c<<std::endl;
}
