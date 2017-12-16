// coded by DarkC343
// This code is showing the use of range-based for statement and reference method to modify it's elements.
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main( int argc, char ** argv )
{
    /* IMPORTANT
     *  - If we don't need to access subscripts of an array, it's more common to use range-based for statement as follow.
     *      like when we don't need the index number ( counter-control variable ).
     *  - Using counter-controlled for statement to print out or modify every elements of an array is not recommended
     *      because it would be cumbersome. Use range-based for statement instead.
     *  - Range-based for statement
     *      """ for ( rangeVariableDecleration : expression )
     *              statement
     *      """
     * */
    array< int, 7 > items = { 11, 22, 33, 4, 5, 6, 70 };
        
    for ( int item : items )
        cout << item << ", ";
    
    cout << "\n" << "New items, multipled by 2, using reference" << endl;
    
    for ( int &itemRef : items )
        itemRef *= 2;
    
    for ( int item : items )
        cout << item << ", ";
        
    cout << endl;
    
    return 0;
}