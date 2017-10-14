/*
 * In the name of God
 * 
 * Student name: AmirMohammad Biuki
 * 
 * Exercise name: 2.19
 * 
 */
#include <iostream>

using namespace std;

class Compare
{
public:
    // Constructor
    Compare( int x, int y, int z )
    {
        num1 = x;
        num2 = y;
        num3 = z;
    }
    
    // Sum function
    void sum()
    {
        sumNums = num1 + num2 + num3;
        cout << "Sum is " << sumNums << endl;
    }
    
    // Average function    
    void average()
    {
        averageNums = ( num1 + num2 + num3 ) / 3.0;
        cout << "Average is " << averageNums << endl;
    }
    
    // Product function
    void product()
    {
        productNums = num1 * num2 * num3;
        cout << "Product is " << productNums << endl;
    }
    
    // Compare function
    void compare()
    {
        // If inputs (2 or 3 of them) are the same!
        if( num1 == num2 || num2 == num3 || num1 == num3 )
        {
            cout << "Oops! you were told to input different inputs..." << endl;
        }
        
        // All the inputs are different
        else
        {
            if( num1 < num2 && num1 < num3 )
            {
                min = num1;
                
                if( num2 < num3 )
                    max = num3;
                else
                    max = num2;
            }
            
            if( num2 < num1 && num2 < num3 )
            {
                min = num2;
                
                if( num1 < num3 )
                    max = num3;
                else
                    max = num1;
            }
            
            if( num3 < num1 && num3 < num2 )
            {
                min = num3;

                if( num1 < num2 )
                    max = num2;
                else
                    max = num1;
            }
            
            // Outputs the minimum
            cout << "Smallest is " << min << endl;
            
            // Outputs the maximum
            cout << "Largest is " << max << endl;
        }
    }
    
    

private:
    int num1, num2, num3, sumNums, productNums, max, min;
    float averageNums;
};

int main()
{
    int value1, value2, value3;
    
    cout << "Input three different integers: ";
    cin >> value1 >> value2 >> value3;
    
    Compare compareObj( value1 , value2 , value3);
    
    // Show the sum of inputs
    compareObj.sum();
    // Show the average of inputs
    compareObj.average();
    // Show the product of inputs
    compareObj.product();
    // Show the smallest and the largest value from inputs
    compareObj.compare();
    
    return 0;
}
