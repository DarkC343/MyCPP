#include <iostream>
#include <string>
#include "jobLib.h"

using namespace std;

Job::Job( string jobName )
{
    setJobTitle( jobName );
}

void Job::setJobTitle( string jobName )
{
    // Validation check
    if( jobName.length() <= 25 )
        jobTitle = jobName;
    
    if( jobName.length() > 25 )
    {
        // substr( m, n ) : n > first char ( start from 0 )
        //                  m > length ( 25 )
        jobTitle = jobName.substr( 0, 25 );
        
        // Error pop-up message
        cout << "Maximum title of your job is 25 characters.\nThe \"" << jobName << "\" is not appropriate. It will be truncated automatically." << endl;
    }
}

string Job::getJobTitle() const
{
    return jobTitle;
}

void Job::displayMessage() const
{
    cout << "Job > " << getJobTitle() << endl;
}
