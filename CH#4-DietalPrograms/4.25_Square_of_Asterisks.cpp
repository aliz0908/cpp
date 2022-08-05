#include<iostream>
int main()
{
int n, i, j;
i=1;
j=1;
std::cout<<"Enter size of rectangle:";
std::cin>>n;
while (i<=n)
{
    j=1;
    while (j<=n)
    {
        if (i==1 || i==n || j==1 || j==n)
        
            std::cout<<"*";
        
        else
        
            std::cout<<" ";
        
        j++;
    }
        std::cout<<std::endl;
        i++;
}


 std::cin.get();
}
