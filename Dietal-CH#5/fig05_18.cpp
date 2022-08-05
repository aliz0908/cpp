// Logical operators.
#include<iostream>
int main()
{
    // create truth table for && (logical AND) operator
    std::cout<<std::boolalpha<<"Logical AND (&&)"
            <<"\nfalse&&false: "<<(false&&false)
            <<"\nfalse&&true: "<<(false&&true)
            <<"\ntrue&&false: "<<(true&&false)
            <<"\ntrue&&true: "<<(true&&true)<<"\n\n";
    
    // create truth table for || (logical OR) operator
    std::cout<<"Lgical OR (||)"
            <<"\nfalse||false: "<<(false||false)
            <<"\nfalse||true: "<<(false||true)
            <<"\ntrue||false: "<<(true||false)
            <<"\ntrue||true: "<<(true||true)<<"\n\n";
    
    // create truth table for ! (logical negation) operator
    std::cout<<"Logical NOT(!)"
            <<"\n!false: "<<(!false)
            <<"\n!true: "<<(!true)<<std::endl;

}//end main