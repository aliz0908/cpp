#include<iostream>
class Average
{
    public:
        void calculateAverage();
}; //end class

void Average::calculateAverage()
{
    unsigned int value;
    unsigned int count{0};
    unsigned int total{0};

    std::cout<<"Enter integers (9999 to end)"<<std::endl;
    std::cin>>value;

    while (value != 9999)
    {
        total+=value;
        count++;
        std::cin>>value;
    }//end while

    if(count!=0) //if statement
    
    std::cout<<"\nThe Average is:"
            <<static_cast<double>(total)/count<<std::endl;

    else
    {
        std::cout<<"No values were entered!";
    } //end else
    
}//end data file

int main()
{
    Average avg;
    avg.calculateAverage();
    std::cin.get();
}//end main

