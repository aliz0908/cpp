// Creating a GradeBook object and calling its member functions.
#include "GradeBook.h" //including the defination of class gradebook.
int main()
{
    //create gradebook object
    GradeBook myGradeBook("CS101 programming fundamntals");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.diplayGradeReport();
}