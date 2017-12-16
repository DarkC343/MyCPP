// coded by DarkC343
// This code is simple bar chart
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main( int argc, char ** argv )
{
    const size_t arraySize = 11;
    array< int, arraySize > n = { 0, 1, 2, 3, 0, 7, 4, 2, 1, 5, 0 };
    
    for ( size_t i = 0; i < n.size(); ++i )
    {
        if ( i == 0 )
            cout << setw( 6 ) << "0-9:";
        else if ( i == 10 )
            cout << setw( 6 ) << "100:";
        else
            cout << i * 10 << "-" << ( i + 1 ) * 10 - 1 << ":";
        
        cout << " ";
        
        for ( size_t j = 0; j < n[ i ]; ++j )
            cout << '*';
            
        cout << endl;
    }
    
    return 0;
}