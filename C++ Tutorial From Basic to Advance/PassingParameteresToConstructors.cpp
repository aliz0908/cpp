#include<iostream>
class Student
{
    private:
    int marks;
    char grade;
    public:
    Student(int m, char g)
    {
        marks = m;
        grade = g;
    }
    void show()
    {
        std::cout<<"Marks = "<<marks<<std::endl;
        std::cout<<"Grade = "<<grade<<std::endl;
    }
};

int main()
{
    Student s1(961,'A'), s2(861,'B');
    std::cout<<"Record of student 1"<<std::endl;
    s1.show();
    std::cout<<"Record of student 2"<<std::endl;
    s2.show();
    std::cin.get();
}