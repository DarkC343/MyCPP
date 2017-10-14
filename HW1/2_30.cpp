/*
 * In the name of God
 * 
 * Student name: AmirMohammad Biuki
 * 
 * Exercise name: 2.30
 * 
 */
#include <iostream>

using namespace std;

class Bmi
{
public:
    Bmi( float weightInKg, float heightInM )
    {
        weight = weightInKg;
        height = heightInM;
        cout << "BMI VALUES" << endl;
        cout << "Underweight: less than 18.5" << endl;
        cout << "Normal:      between 18.5 and 24.9" << endl;
        cout << "Overweight:  between 25 and 29.9" << endl;
        cout << "Obese:       30 or greater" << endl;
    }
    
    float calculateBmi()
    {
        bmi = weight / ( height * height );
        cout << "Your BMI is " << bmi << endl;
        
        if( bmi <= 18.5 )
        {
            cout << "You are underweight!" << endl;
        }
        
        if( bmi > 18.5 && bmi <= 24.9 )
        {
            cout << "You are normal!" << endl;
        }
        
        if( bmi > 24.9 && bmi <= 29.9 )
        {
            cout << "You are overweight!" << endl;
        }
        
        if( bmi > 29.9 )
        {
            cout << "You are obese!" << endl;
        }
    }
    
private:
    float weight, height, bmi;
};

int main()
{
    float inputWeight, inputHeight;
    
    cout << "Enter your weight (Kg): ";
    cin >> inputWeight;
    
    cout << "Enter your height (M):  ";
    cin >> inputHeight;
    
    Bmi bmiObj( inputWeight, inputHeight );
    bmiObj.calculateBmi();
    
    return 0;
}
