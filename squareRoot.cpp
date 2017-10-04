/*
A program that calculates the square root of a number with dynamic recurrence relation

    - Babylonian method:
        * calculating √S *
        f( n + 1 ) = ( f() + S / f() ) / 2
        n --> ∞ :::: f( n ) ---> √S
        f(0) --> m ∈ N (ex. 10)
*/

#include <iostream>

using namespace std;

class Math
{
public:
    // Set the number for it's square root: Obtain from user
    int setBaseNumber( int baseNum )
    {
        baseNumber = baseNum;
    }
    
    // Set the number for it's square root: Call for Math scope process
    int getBaseNumber() const
    {
        return baseNumber;
    }
    
    // Set the sequence index for babylonian function : Obtain from user
    int setSequenceIndexNumber( int sequenceIndexNum )
    {
        sequenceIndexNumber = sequenceIndexNum;
    }
    
    // Get the sequence index for babylonian function : Call for Math scope process
    int getSequenceIndexNumber() const
    {
        return sequenceIndexNumber;
    }

    // Babylonian method function
    float f( int n ) const
    {
        if( n == 1 )
            return 10;
        return ( f( n - 1 ) + getBaseNumber() / f( n - 1 ) ) / 2;
    }
    
    // Output the result
    void saySquareRoot() const
    {
        cout << "f(" << getSequenceIndexNumber() << ")" << " of babylonian method:" << endl;
        cout << "The square root of " << getBaseNumber() << " is " << f( getSequenceIndexNumber() ) << endl;
    }

private:
    int baseNumber, sequenceIndexNumber;
};

int main()
{
    Math mathObj;
    
    // A number for calculating it's square root
    mathObj.setBaseNumber(110);
    
    // Sequence index number ( can be anything ) but, if n --> ∞ then f( n ) ---> √S
    mathObj.setSequenceIndexNumber(15);
    
    // Output the result
    mathObj.saySquareRoot();
}

