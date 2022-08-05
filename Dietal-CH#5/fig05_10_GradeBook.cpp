// Member-function definitions for class GradeBook that
// uses a switch statement to count A, B, C, D and F grades.
#include<iostream>
#include "GradeBook.h"
using namespace std;
GradeBook::GradeBook(string name) 
: aCount(0),
  bCount(0),
  cCount(0),  
  dCount(0),
  fCount(0)

{
    setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
    if( name.size()<=25) //if the name has 25 or less characters
        courseName=name;
    else
    {
        courseName=name.substr(0,25);
        cerr<<"Name\""<<name<<"\"exceeds maximum lenght(25).\n"
            <<"Limiting courseName to first 25 characters"<<endl;
    } //if...else function
    
} 
string GradeBook::getCourseName() const
{
    return courseName;
}
void GradeBook::displayMessage() const
{
    cout<<"Welcome to the grade book for "<<getCourseName()<<endl;
}
void GradeBook::inputGrades() 
{
    int grade;
    cout<<"Enter the letter grades."<<endl;
    cout<<"Enter the EOF chracter to end input:"<<endl;
    //loop until user enters end of file sequence
    while ( (grade=cin.get() )!=EOF)
    {
        // determine which grade was entered
switch ( grade ) // switch statement nested in while
{
case 'A': // grade was uppercase A
case 'a': // or lowercase a
++aCount; // increment aCount
break; // necessary to exit switch
case 'B': // grade was uppercase B
case 'b': // or lowercase b
++bCount; // increment bCount
break; // exit switch
case 'C': // grade was uppercase C
case 'c': // or lowercase c
++cCount; // increment cCount
break; // exit switch
case 'D': // grade was uppercase D
case 'd': // or lowercase d
++dCount; // increment dCount
break; // exit switch
case 'F': // grade was uppercase F
case 'f': // or lowercase f
++fCount; // increment fCount
break; // exit switch
case '\n': // ignore newlines,
case '\t': // tabs,
case ' ': // and spaces in input
break; // exit switch
default: // catch all other characters
cout << "Incorrect letter grade entered."
<< " Enter a new grade." << endl;
break; // optional; will exit switch anyway
} // end switch
    } //end while
    
}// end input grades
void GradeBook::diplayGradeReport() const
{
    //output summary of grades
    cout<<"\nNumber of students who recieved esch letter grade:"
            <<"\n"<<aCount
            <<"\n"<<bCount
            <<"\n"<<cCount
            <<"\n"<<dCount
            <<"\n"<<fCount
            <<endl;
}// end function display message

// Creating a GradeBook object and calling its member functions.

// Creating a GradeBook object and calling its member functions.

int main()
{
    //create gradebook object
    GradeBook myGradeBook("CS101 programming fundamntals");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.diplayGradeReport();
}
