// coded by DarkC343
#include <iostream>
#include <array>
using namespace std;

class GradeBook
{
public:
    static const size_t studentSize = 10;
    
    GradeBook( const string &, const array< int, studentSize > & );
    void setCourseName( const string & );
    string getCourseName() const;
    void displayMessage( void ) const;
    int getMaximum() const;
    int getMinimum() const;
    void processGrades( void ) const;
    void outputGrades( void ) const;
    double getAverage() const;
    void outputBarChart( void ) const;
    
private:
    string courseName;
    array< int, studentSize > gradesArray;
};