// coded by DarkC343
// This code is showing static and automatic storage duration difference in arrays.
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void staticArray();
void automaticArray();
const size_t arraySize = 5;

int main( int argc, char ** argv )
{   
    /* IMPORTANT
     *  - We can apply static array declaeration so that it's not created and initialized each time the program
     *      calls the function and not destroyed each time the function terminates.
     *  - Static arrays are initialized to 0 ( zero ) by defualt but you can assign any values to it in definition
     *  - Static storage duration variables and arrays contain the values stored during previous funtion call.
     *  - Static storage duration is beneficial for perfotmance and large arrays.
     *  - Automatic storage duration variables and arrays are recreated and reinitialized for each function call.
     * */
    cout << "Static array function (First time initialization)" << endl;
    staticArray();
    
    cout << "Automatic array function (First time initialization)" << endl;
    automaticArray();
    
    cout << "Static array function (Second time initialization)" << endl;
    staticArray();
    
    cout << "Automatic array function (Second time initialization)" << endl;
    automaticArray();
    
    return 0;
}

void staticArray( void )
{
    static array< int, arraySize > sa;
    
    for ( size_t i = 0; i < sa.size(); ++i )
        cout << "sa[" << i << "] = " << sa[ i ] << "\t";
    
    cout << endl;

    cout << "Modifying the static array..." << endl;
    
    for ( size_t i = 0; i < sa.size(); ++i )
        cout << "sa[" << i << "] = " << ( sa[ i ] += 5 ) << "\t";
    
    cout << endl;
}

void automaticArray( void )
{
    array< int, arraySize > aa = { 1, 2, 3, 4, 5 };
    
    for ( size_t i = 0; i < aa.size(); ++i )
        cout << "aa[" << i << "] = " << aa[ i ] << "\t";

    cout << endl;
    
    cout << "Modifying the automatic array..." << endl;
    
    for ( size_t i = 0; i < aa.size(); ++i )
        cout << "aa[" << i << "] = " << ( aa[ i ] += 5 ) << "\t";

    cout << endl;    
}