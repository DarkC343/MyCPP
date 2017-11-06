// Name: AmirMohammad Biuki
// Student No. : 962164023
#include <iostream>
using namespace std;

class MOGHAYESE
{
public:
	MOGHAYESE( float x, float y, float z )
    {
        a = x;
        b = y;
        c = z;
    }
    
    float biggest()
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
    
private:
    float a, b, c;
    float max;
};

int main()
{
	
	float a, b, c, d, e, f, g, h, i;
	float max;
    
    cout << "Enter 9 integers: ";
    
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
	
    // sending 9 variables to 3 objects to check which is the largest value out of 3
	MOGHAYESE moghayeseObj1( a, b, c );
	MOGHAYESE moghayeseObj2( d, e, f );
	MOGHAYESE moghayeseObj3( g, h, i );
    
    // compare the largest values from 3 previous objects
    MOGHAYESE moghayeseObjFinal( moghayeseObj1.biggest(), moghayeseObj2.biggest(), moghayeseObj3.biggest() );
    
    // printing out the result
    cout << "The biggest value is: " << moghayeseObjFinal.biggest() << endl;

    
	
	return 0;
}
