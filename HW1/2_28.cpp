/*
 * In the name of God
 * 
 * Student name: AmirMohammad Biuki
 * 
 * Exercise name: 2.28
 * 
 */
#include <iostream>

using namespace std;

class IntegerSeparate
{
public:
    IntegerSeparate( int num )
    {
        setInteger( num );
    }
    
    void setInteger( int constructorNum )
    {
        number = constructorNum;
    }
    
    int getInteger() const
    {
        return number;
    }
    
    void result()
    {
        while( number != 0 )
        {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }
                
        while( reversedNumber >= 1 )
        {
            digit = reversedNumber % 10;
            cout << digit << "  ";
            reversedNumber /= 10;
        }
        
        cout << endl;
    }
    
private:
    int number, digit, remainder;
    int reversedNumber = 0;
};

int main()
{
    int inputNumber;
    
    cout << "Enter an integer: ";
    cin >> inputNumber;
    
    IntegerSeparate separateObj( inputNumber );
    separateObj.result();
    
    return 0;
}
