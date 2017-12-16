// coded by DarkC343
// This code shows the frequency of a die that is rolled 6 million times.
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main( int argc, char ** argv )
{
    /* IMPORTANT:
     *  - To make unpredictable and strong random numbers use these functions from <random> library.
     *      default_random_engine engine( static_cast< size_t >( time(0) ) );
     *      uniform_int_distribution< size_t > randomInt( 1, 6 );
     *      - First function creates object from standard class named default_random_engine and the seed is time(0)
     *          which is the number of seconds from january 1, 1970.
     *      - Second function set the range of random from 1 to 6 which is six faces of dice.
     *      - We simply call the third function to make random number of what we desired
     * */
    default_random_engine engine( static_cast< size_t >( time(0) ) );
    uniform_int_distribution< size_t > randomInt( 1, 6 );
    
    const size_t arraySize = 7;
    array< size_t, arraySize > frequency = {};

    for ( size_t i = 1; i <= 6000000; ++i )
        ++frequency[ randomInt( engine ) ];
    
    cout << "Face" << setw( 11 ) << "Frequency" << endl;
    
    for ( size_t j = 1; j < frequency.size(); j++ )
        cout << setw( 4 ) << j << setw( 11 ) << frequency[ j ] << endl;
    
    return 0;
}