#include<iostream>
class Position
{
   public:
   int x = 10;
   int y = 20;
    Position operator + (Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }

    int operator == (Position pos)
    {
        if (x==pos.x && y==pos.y)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Position p1, p2;
    Position p3 = p1 + p2;
    std::cout<<p3.x<<"  "<<p3.y<<std::endl;

    if(p1==p2)
    {
        std::cout<<"They are the same"<<std::endl;
    }
    return 0; 

}