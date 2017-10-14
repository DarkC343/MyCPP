/*
 * In the name of God
 * 
 * Student name: AmirMohammad Biuki
 * 
 * Exercise name: 2.20
 * 
 */
#include <iostream>

using namespace std;

class Circle
{
public:
    // Constructor
    Circle( int radiusOfCirlce )
    {
        setRadius( radiusOfCirlce );
    }
    
    // Set method
    void setRadius( int constructorRadius )
    {
        radius = constructorRadius;
    }
    
    // Get method
    int getRadius() const
    {
        return radius;
    }
    
    // Calculate diameter of the circle
    void diameter()
    {
        diameterResult = 2 * radius;
        cout << "Diameter is " << diameterResult << endl;
    }
    
    // Calculate circumference of the circle
    void circumference()
    {
        circumferenceResult = 2 * pi * radius;
        cout << "Circumference is " << circumferenceResult << endl;
    }
    
    // Calculate area of the circle
    void area()
    {
        areaResult = pi * radius * radius;
        cout << "Area is " << areaResult << endl;
    }
private:
    int radius;
    float diameterResult, circumferenceResult, areaResult;
    float pi = 3.14159;
};

int main()
{
    int radiusValue;
    
    // Message to obtain radius
    cout << "Enter the radius: ";
    
    // Obtain radius
    cin >> radiusValue;
    
    // Call the Circle class for it's member functions
    Circle circleObj( radiusValue );
    
    // Output the diameter
    circleObj.diameter();
    
    // Output the circumference
    circleObj.circumference();
    
    // Output the area
    circleObj.area();
    
    return 0;
}
