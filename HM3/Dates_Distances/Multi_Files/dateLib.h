#include <iostream>
using namespace std;

class DATE
{
// access specifier
public:
	// member functions
	// constructor
	explicit DATE( int, int, int );
	
	// setting the second date
	void setDesDate( int y, int m, int d );
	
	// get method to recieve the year value of first date
	int getYear() const;
	// get method to recieve the month value of first date
	int getMonth() const;
	// get method to recieve the day value of first date
	int getDay() const;
	// get method to recieve the year value of second date	
	int getDesYear() const;
	// get method to recieve the month value of second date	
	int getDesMonth() const;
	// get method to recieve the day value of second date	
	int getDesDay() const;
	// calculating the difference from the end of that year : first date
	int endYearDif();
    // calculating the difference from the end of that year : second date
    int endYearDifOfDes();

    int dateDifInDay();
	
private:
	// setting the variables (member data)
	int remainDaysFromEndYear, remainDaysOfEndMonth;
	int year, month, day;
	int desYear, desMonth, desDay;
	int difYearInDay;
};
