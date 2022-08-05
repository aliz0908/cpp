//Gas Mileage
#include<iostream>
int main()
{
    float num_of_miles;
    float num_of_gallons;
    float MPG;

    

    
    
    std::cout<<"Enter number of miles driven OR -1 to exit"<<std::endl;
    std::cin>>num_of_miles;

     

    while (num_of_miles != -1)
    {
     

     std::cout<<"Enter number gallons:" ;
     std::cin>>num_of_gallons;

         
        MPG= num_of_miles/num_of_gallons; 

        std::cout<<"Number of miles entered were:" <<num_of_miles<<std::endl;
        std::cout<<"Miles per Gallon of vehicle is:" <<MPG<<std::endl;


        std::cout<<"Enter number of miles driven OR -1 to exit"<<std::endl;
       std::cin>>num_of_miles;


    

    }//end while
    
    
}//end main