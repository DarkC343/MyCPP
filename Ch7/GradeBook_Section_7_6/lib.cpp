// coded by DarkC343
#include <iostream>
#include <array>
#include <iomanip>
#include "lib.h"
using namespace std;

GradeBook::GradeBook( const string &name, const array< int, studentSize > &grades ) : courseName( name ), gradesArray( grades )
{
}

void GradeBook::setCourseName( const string &n )
{
    courseName = n;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage( void ) const
{
    cout << "Name of course is:\n" << getCourseName() << endl;
}

int GradeBook::getMaximum() const
{
    int maximum = 0;
    
    for ( int grade : gradesArray )
        if ( grade > maximum )
            maximum = grade;
    
    return maximum;
}

int GradeBook::getMinimum() const
{
    int minimum = 100;
    
    for ( int grade : gradesArray )
        if ( grade < minimum )
            minimum = grade;
    
    return minimum;
}

void GradeBook::processGrades( void ) const
{
    outputGrades();
    cout << "Maximum: " << getMaximum() << endl;
    cout << "Minimum: " << getMinimum() << endl;
    cout << "Average: " << getAverage() << endl;
    outputBarChart();
}

void GradeBook::outputGrades( void ) const
{
    for ( size_t i = 0; i < gradesArray.size(); ++i )
        cout << "Student" << setw( 3 ) << i + 1 << ": " << setw( 4 ) << gradesArray[ i ] << endl;
}

double GradeBook::getAverage() const
{
    int total = 0;
    
    for ( int grade : gradesArray )
        total += grade;
        
    return static_cast< double >( total ) / gradesArray.size();
}

void GradeBook::outputBarChart( void ) const
{
    const size_t frequencySize = 11;
    array< size_t, frequencySize > frequency = {};
    
    for ( int grade : gradesArray )
        ++frequency[ grade / 10 ];
    
    for ( size_t j = 0; j < frequency.size(); ++j )
    {
        if ( 0 == j )
            cout << "  0-9: ";
        else if ( 10 == j )
            cout << "  100: ";
        else
            cout << j * 10 << "-" << j * 10 + 9 << ": ";
    
        for ( size_t k = 0; k < frequency[ j ]; ++k )
            cout << '*';
        
        cout << endl;
    }
}