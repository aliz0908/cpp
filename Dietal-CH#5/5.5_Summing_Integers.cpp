#include<iostream>
class Sum
{
public:
    void sum(); 
};

void Sum::sum()
{
    unsigned int total{0};
    unsigned int value;
    unsigned int number;

    std::cout<<"Enter following values to be summed"
            <<"followed by the values: "<<"\n";
    std::cin>>number;

    for (int i = 0; i <= number; i++)
    {
        std::cin>>value;
        total+=value;
    }//end for

    std::cout<<"Sum of the "<<number<<" values is "<<total<<std::endl;

          
}


int main()
{
    Sum application;
    application.sum();
    std::cin.get();  
}
