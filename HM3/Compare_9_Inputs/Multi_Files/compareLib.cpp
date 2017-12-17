#include <iostream>
using namespace std;

#include "compareLib.h"

MOGHAYESE::MOGHAYESE( float x, float y, float z )
{
    a = x;
    b = y;
    c = z;
}

// finds the largest value
float MOGHAYESE::biggest()
{
    max = a;
    
    if ( b > max )
    {
        max = b;
    }
    
    if ( c > max )
    {
        max = c;
    }
    
    return max;
}
