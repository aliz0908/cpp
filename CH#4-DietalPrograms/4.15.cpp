//Sales commisson counter
#include<iostream>
int main()
{
    int sales;
    int salary;
    int comm;
    int ts;

    std::cout<<"Enter sales in dollar of -1 to exit:";
    std::cin>>sales;

    while (sales!=-1)
    {
        std::cout<<"Enter the salary salesman recieve:"<<std::endl;
        std::cin>>salary;

        comm= (sales*9)/100;
        std::cout<<"Commission Earned:"<<comm<<std::endl;

        ts=comm+salary;
        std::cout<<"Total Salary:"<<ts<<std::endl;
        
        std::cout<<"Enter sales in dollar of -1 to exit:";
        std::cin>>sales;

}//end while
    
}