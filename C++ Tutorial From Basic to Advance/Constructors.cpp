#include<iostream>

class Sally
{
    private:
    int x;
    public:
    Sally()
    {
        std::cout<<"I am a constructor"<<std::endl;
    }
};

int main()
{
    Sally obj1, ob2, ob3;
    std::cin.get();
}