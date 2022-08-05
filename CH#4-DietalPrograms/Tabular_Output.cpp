//4.18 Tabular Output
#include<iostream>
int main()
{
    unsigned int num{1};

    std::cout<<"N\t10*N\t100*N\t1000*N\n\n";

    while (num<=5)
    {
        std::cout<<num<<"\t"<<(num*10)<<"\t"<<(num*100)<<"\t"<<(num*1000)<<"\n";
        num++;
    }
    system("pause");
}