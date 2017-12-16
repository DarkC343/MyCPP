// coded by DarkC343
// Poll analysis method 1 (Polling 1 to 5 from 20 students).
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main( int argc, char ** argv )
{
    const size_t surveyRateSize = 20;
    const size_t resultSize = 6;
    
    array< size_t, surveyRateSize > surveyRate = { 1, 2, 3, 4, 5, 1, 2, 3, 7, 5, 1, 2, 3, 4, 5, 2, 3, 3, 3, 1 };    
    array< size_t, resultSize > result = {};
    
    for ( size_t i = 0; i < surveyRate.size(); ++i )
        switch(surveyRate[ i ])
        {
            case 1:
                ++result[ 1 ];
                break;
            case 2:
                ++result[ 2 ];
                break;
            case 3:
                ++result[ 3 ];
                break;
            case 4:
                ++result[ 4 ];
                break;
            case 5:
                ++result[ 5 ];
                break;
            default:
                ++result[ 0 ];
                break;
        }
        
        cout << "Rating" << setw( 14 ) << "Frequency" << endl;
        
        for ( size_t j = 1; j < result.size(); ++j )
            cout << setw( 6 ) << j << setw( 9 ) << result[ j ] << endl;
        
        cout << "Incorrect rates frequency: " << result[ 0 ] << endl;


    return 0;
}