//Find the Largest number.
#include<iostream>
int main() 
{
    int counter =1;
    int number{0};
    int largest{0};
    
    std::cout<<"Please Enter 10 numbers for finding largest values: "<<std::endl;
    

    while (counter<=10) //start  while
    {
        std::cout<<"Number: ";
        std::cin>>number;
         counter++;
        
         if (largest<number) //start if
        {
            largest=number;
            
        } //end if 
    
    }// end while

     std::cout<<"Largest number was: "<<largest<<std::endl;   
     system("pause");      
} //end main