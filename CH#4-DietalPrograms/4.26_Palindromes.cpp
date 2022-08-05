// For finding Palidrome.
#include<iostream>
int main()
{
    int a, b, c, d, e;

    std::cout<<"Enter five digit number: ";
    unsigned int n;
    std::cin>>n;

    a = n/10000;
    b = n/1000 % 10;
    c = n/100 % 10;
    d = n/10 % 10;
    e = n%10;

    if (a==e || b==d)
    {
        std::cout<<"Palindrome!..";
    }
    
    else
    {
        std::cout<<"Not a Palindrome!..";
    }
    std::cin.get();
}