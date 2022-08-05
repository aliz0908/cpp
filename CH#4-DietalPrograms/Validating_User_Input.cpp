#include<iostream>
int main()
{
    int passes={0};
    int failures={0};
    unsigned int studentcounter={1};

    while (studentcounter<=10)
    {
        std::cout<<"Enter result(Pass=1 & Fail=2)"<<std::endl;
        int result;
        std::cin>>result;


        if (result==1)
        {
            passes++;
        }//end if

        else if (result==2)
        {
            failures++;
        }
         
        
        
       else
        {
            studentcounter--;
            
            std::cout<<"Plese enter valid value!"<<std::endl;
        }
      
        studentcounter++;
    
    }//end while

    if (passes>=8)
      {
        std::cout<<"Bonus to indtructor!"<<std::endl;
      } 
        
     
}
