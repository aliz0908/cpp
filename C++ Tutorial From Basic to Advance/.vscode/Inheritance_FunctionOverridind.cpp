#include<iostream>

class Computer
{
    public:
    
        Computer(){}
        Computer(int, int, double, int);
        void show();
    
    protected:
        int wordSize; //bits
        int memorySize; //megabites
        double storageSize; //megabytes
        int speed; //megahertz
};
class Laptop : public Computer
{
    public:
    Laptop(){}
    Laptop(int, int, double, int, double, double, double, double);
    void show();
    private:
        double length;
        double width;
        double height;
        double weight;
};

Computer::Computer(int wdSiz, int memSiz, double storSiz, int spd)
{
    wordSize = wdSiz;
    memorySize = memSiz;
    storageSize = storSiz;
    speed = spd;
}
void Computer::show()
{
    std::cout<<"Word Size: "<< wordSize<<std::endl;
    std::cout<<"Memory Size: "<< memorySize<<std::endl;
    std::cout<<"Storage Size: "<<storageSize<<std::endl;
    std::cout<<"Speed: "<<speed<<std::endl;
}
Laptop::Laptop(int wdSiz, int memSiz, double storSiz, int spd,
        double len, double wid, double ht, double wt)
        :Computer(wdSiz, memSiz, storSiz, spd)
    {
        length = len;
        width = wid;
        height = ht;
        weight = wt;
    }
    void Laptop::show()
    {
        std::cout<<"Length: "<<length<<std::endl;
        std::cout<<"Width: "<<width<<std::endl;
        std::cout<<"Height: "<<height<<std::endl;
        std::cout<<"Weight: "<<weight<<std::endl;
    }

int main()
{
    Computer comp(4, 512, 20, 2);
    Laptop lap(0, 0, 0, 0, 15, 19, 14, 2);
    std::cout<<"Computer Specs: "<<std::endl;
    comp.show();
    std::cout<<"Laptop Specs: "<<std::endl;
    lap.show();
    return 0;
}