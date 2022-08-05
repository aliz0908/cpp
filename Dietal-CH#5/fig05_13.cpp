// break statement exiting a for statement.
#include<iostream>
int main()
{
    unsigned int count;

    for (count = 1; count <= 10; count++)
    {
        if (count==5)
        {
            break;
        }//end if
        std::cout<<"Count :"<<count<<std::endl;
    }//end for
    std::cout<<"Break loop at count="<<count<<std::endl;
}