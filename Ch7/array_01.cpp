// coded by DarkC343
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main( int argc, char ** argv )
{
    /* IMPORTANT:
     *  - size_t == unsigned int
     *  - Array size must be a constant usigned int which is const size_t
     *  - If you got an error while compiling include the following library at top of code: <cstddef>
     *  - Use empty curly braces ( {} ) to initialize the array to zero values.
     *    -- it only works *only* while defining an array
     *  - For making every elements of the array to zero *everywhere* in the code, you should follow this method:
     *      ""
     *        for ( size_t j = 0; j < s.size(); j++ )
     *            s[ j ] == 0;
     *      ""
     * */
    const size_t arraySize = 5;
    array< int, arraySize > s = {};
    
    for ( size_t i = 0; i < s.size(); i++ )
        cin >> s[ i ];
    
    cout << "Element" << setw( 10 ) << "Value" << endl;
    
    for ( size_t j = 0; j < s.size(); j++ )
        cout << setw( 7 ) << j << setw( 10 ) << s[ j ] << endl;
    
    return 0;
}