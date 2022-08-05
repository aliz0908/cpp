#include<iostream>
class  Small
{
private:
    unsigned int number;
    unsigned int value;
    unsigned int smallest;
public:
     void findSmallest();
};//End class defination

void Small::findSmallest()
{
     std::cout<<"Enter the number of integers to be processed ";
     std::cin>>number;
     std::cout<<"Now enter integers to compare:"<<std::endl;
     std::cin>>smallest;

     for (int i = 2; i <= number; i++)
     {
         std::cin>>value;

         if (smallest>number)
         {
             smallest=value;
         }//end if
         
     }//end for
    std::cout<<"The smallest integer is: "<<smallest<<std::endl; 
} //end source code

int main()
{
    Small smol;
    smol.findSmallest();
    std::cin.get();
} 