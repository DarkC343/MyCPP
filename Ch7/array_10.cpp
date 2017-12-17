#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main( int argc, char ** argv )
{
    /* IMPORTANT
     *  - We have two types of searching methods from algorithm library:
     *      1) using *linear* search for *unsorted array* with lower speed
     *      2) using *binary* search for *sorted array in ascending order* whith higher speed
     *  - To sort an array in *ascending order* we use sort() function from algorithm library.
     *      It gets 2 arguments which is begin() and end() function.
     *  - Ascending order for integers means 0-9 and for strings means A-Z then a-z.
     *  - We should specify all arguments of shortened if (i.e expressin ? "ok" : "not ok").
     *      We can't omit either first or second arguemnt.
     *  - We should use parentheses () to use shortened if in cout (i.e cout << expression ? "ok" : "not ok"
     *      is not correct because of precendence logic error).
     * */
    const size_t numericArrSize = 10;
    const size_t stringArrSize = 20;
    
    array< int, numericArrSize > numericalArray = { 40, 20, 54, 0, 90, -50, 66, -101, 505, 1 };
    array< string, stringArrSize > stringArray = { "Amir", "Ali", "Hasan", "Jafar", "Majid",
        "ashkaan", "ehsan", "akbar", "siavash", "pouria",
        "Hosein", "Parvaneh", "Elaahe", "Maryam", "Zeynab",
        "leyla", "shiva", "faeze", "soheila", "faatemeh"
    };
    
    cout << "Unsorted:" << endl;
    
    for ( int number : numericalArray )
        cout << number << " ";
    cout << endl;
    
    for ( string name : stringArray )
        cout << name << " ";
    cout << endl;
    
    sort( numericalArray.begin(), numericalArray.end() );
    sort( stringArray.begin(), stringArray.end() );

    cout << "Sorted:" << endl;

    for ( int number : numericalArray )
        cout << number << " ";
    cout << endl;
    
    for ( string name : stringArray )
        cout << name << " ";
    cout << endl;
    
    bool foundInNumericalArray = binary_search( numericalArray.begin(), numericalArray.end(), -51 ); // ***********
    cout << "-51 was" << ( !foundInNumericalArray ? " not" : "" ) << " found" << endl;                 // **********
    
    bool foundInStringArray = binary_search( stringArray.begin(), stringArray.end(), "Jafar" );
    cout << "Jafar was" << ( !foundInStringArray ? " not" : "" ) << " found" << endl;
    
    return 0;
}