#include<iostream>
class Boris
{
    private:
    int num;
    char ch;
    public:
    Boris()
    {
        num = 0;
        ch = 'x';
    }
    Boris(int n, char c)
    {
        num = n;
        ch = c;
    }
    void show()
    {
        std::cout<<this->num<<std::endl;
        std::cout<<this->ch<<std::endl;
    }
};
int main()
{
    Boris b1, b2(69, 'p');
    std::cout<<"Content of first "<<std::endl;
    b1.show();
    std::cout<<"Content of second "<<std::endl;
    b2.show();
    std::cin.get();
}