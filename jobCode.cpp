/* The goal of this code is to review:
 * 
 * - separate client and class codes ( Hide member function codes from client code programmer, it's not needed for him to know what's happening inside functions )
 *      -- class codes are separated into 2 files:
 *          --- Member-functions ( jobLib.cpp )
 *          --- Interface ( jobLib.h )
 * 
 * - constructor usage ( This method helps to pass some validation to the input that makes it more meaningful to member data. Example in this code: length limitation )
 * 
 * - length method: x.length( x )    >> this function is to check the length of the string array called x
 * 
 * - substr method: x.substr( m, n ) >> n is start index of string array
 *                                   >> m is the length of text to be truncate
 * Coded by: AmirMohammad Biuki
 * 
 * End of Ch3 from Deitel C++ How to program
 * 
 */

#include <iostream>
#include "jobLib.h"

using namespace std;

int main()
{
    // set initial input for class constructor
    // jobObj1 has a longer input! more than what was expected ( input > 25 ). A pop-up dialogue message will be shown
    // jobObj2 is passed through validation rules ( input <= 25 )
    Job jobObj1("bikaare biaare dars nakhune vaght talaf kon");
    Job jobObj2("Computer Engineer");
    
    // Getting the data from class and show
    cout << "First  job title : " << jobObj1.getJobTitle() << endl;
    cout << "Second job title : " << jobObj2.getJobTitle() << endl;
    
    // Correct and pass new appropriate string to old jobObj 
    jobObj1.setJobTitle("Almost bikaar!");
    
    // Final output
    cout << "First  job title : " << jobObj1.getJobTitle() << endl;
    cout << "Second job title : " << jobObj2.getJobTitle() << endl;
    
}
