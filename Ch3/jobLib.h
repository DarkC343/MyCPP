#include <iostream>
#include <string>

using namespace std;

class Job
{
public:
    // Interface
    Job( string );
    void setJobTitle( string );
    string getJobTitle() const;
    void displayMessage() const;
private:
    string jobTitle;
};
