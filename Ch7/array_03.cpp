// coded by DarkC343
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main( int argc, char ** argv )
{
    /* IMPORTANT:
     * constant values cannot be expressions and should be initialized when they're defined
     * */
    const size_t arraySize = 10;
    array< int, arraySize > a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Element" << setw( 10 ) << "Value" << endl;
    
    for ( size_t i = 0; i < a.size(); ++i )
        a[ i ] = a[ i ] * 2 + 10;
        
    for ( size_t j = 0; j < a.size(); ++j )
        cout << setw( 7 ) << j << setw( 10 ) << a[ j ] << endl;
    
    return 0;
}