// Examination-results problem: Nested control statements.
#include<iostream>

int main() //start main
{
    unsigned int passes = 0;
    unsigned int failures =0;
    unsigned int studentCounter =1;


    while (studentCounter<=10)
    {
        std::cout<<"Enter Result; (1=Pass/2=Fail)"<<std::endl;
        int result=0;
        std::cin>>result;

        if (result==1)
         
            ++passes;
          
        else
    
            ++failures;
            
        
        ++studentCounter;
        
    } //end while
    

    //Display Result
     
     std::cout<<"Passes ="<< passes <<"\n" <<"Failures ="<<failures<<"\n";

     if (passes>=8)
     
         std::cout<<"Bonus to Teacher!"<<std::endl;
      
     

} //end main
