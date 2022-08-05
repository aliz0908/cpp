// GradeBook class definition that counts letter grades.
// Member functions are defined in GradeBook.cpp
#include<string>
class GradeBook
{
    private:
    std::string courseName; //Course name for this Gradebook
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
    
    public:
    explicit GradeBook(std::string); //intialize course name
    void setCourseName(std::string); //set the course name
    std::string getCourseName() const;  //reterive course name
    void displayMessage() const; //Display a welcome message
    void inputGrades(); //input arbitrary number of grades form user    
    void diplayGradeReport() const; //Display grade report based on user input

};  