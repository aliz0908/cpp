// continue statement terminating an iteration of a for statement.
#include<iostream>
int main()
{
    

    for (unsigned int count = 1; count <= 10; count++)
    {
        if (count==5)
        {
            continue;
        }//end if
        std::cout<<"Count:"<<count<<std::endl;
    }//end for
    std::cout<<"Used 'continue' statement to skip printing of 5."<<std::endl;
}//end main