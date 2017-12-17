// coded by DarkC343
/* This code uses GradeBook class to output grades in bar chart, calculating minimum grade,
 * maximum grade and thee average. To input data into GradeBook class we use reference to the variables.
 * */
#include <iostream>
#include <array>
#include <iomanip>
#include "lib.h"
using namespace std;

int main( int argc, char ** argv )
{
    string nameOfCourse = "C++ Tutorials From Zero To Hero!";
    array< int, GradeBook::studentSize > gradesList = { 96, 9, 30, 40, 61, 66, 60, 30, 99, 99 };
    
    GradeBook gbObj( nameOfCourse, gradesList );
    gbObj.displayMessage();
    gbObj.processGrades();    
    
    return 0;
}