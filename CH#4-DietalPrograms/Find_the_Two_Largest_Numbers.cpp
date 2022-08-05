//Find the Two Largest Numbers
#include<iostream>
int main() 
{
    int counter =1;
    int number{0};
    int largest1{0};
    int largest2{0};
    
    std::cout<<"Please Enter 10 numbers for finding largest values: "<<std::endl;
    

    while (counter<=10) //start  while
    {
        std::cout<<"Number: ";
        std::cin>>number;
         counter++;
        
         if (largest1<number) //start if
        {
            largest1=number;
            
        } //end if 
    
    }// end while

     std::cout<<"Largest number was: "<<largest1<<std::endl;   
     

     largest2=largest1-1;
     std::cout<<"2nd largest number: "<<largest2<<std::endl;  
	 
	 system("pause");    
} //end main
