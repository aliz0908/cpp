#include<iostream>
class Travel
{
    private:
    int km, hr;
    public:
    Travel()
    {
        km=hr=0;
    }
    void getData()
    {
        std::cout<<"Enter KM: "<<this->km<<std::endl;
        std::cin>>km;
        std::cout<<"Enter Hours: "<<this->hr<<std::endl;
        std::cin>>hr;
    }
    void showData()
    {
        std::cout<<"You travelled "<<km<<" kilometers in "<<hr<<" hours.."<<std::endl;
    }
    void Add(Travel p)
    {
        Travel t;
        t.km= km+ p.km;
        t.hr= km + p.km;
        std::cout<<"Total travelling "<<t.km<<" kilometers in "<<t.hr<<" hours."<<std::endl;
    }
};
int main()
{
    Travel my, your;
    my.getData();
    my.showData();
    your.getData();
    your.showData();
    my.Add(your);
    std::cin.get();
}