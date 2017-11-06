// Name: AmirMohammad Biuki
// Student No. : 962164023
#include <iostream>
using namespace std;

class DATE
{
// access specifier
public:
	// member functions
	// constructor
	DATE( int y, int m, int d )
	{
		year = y;
		month = m;
		day = d;
	}
	
	// setting the second date
	void setDesDate( int y, int m, int d )
	{
		desYear = y;
		desMonth = m;
		desDay = d;
	}
	
	// get method to recieve the year value of first date
	int getYear() const
	{
		return year;
	}
	
	// get method to recieve the month value of first date
	int getMonth() const
	{
		return month;
	}
	
	// get method to recieve the day value of first date
	int getDay() const
	{
		return day;
	}
	// get method to recieve the year value of second date	
	int getDesYear() const
	{
		return desYear;
	}
	
	// get method to recieve the month value of second date	
	int getDesMonth() const
	{
		return desMonth;
	}

	// get method to recieve the day value of second date	
	int getDesDay() const
	{
		return desDay;
	}
	
	// calculating the difference from the end of that year : first date
	int endYearDif()
	{
		remainDaysFromEndYear = ( 12 - getMonth() + 1 ) * 30;
		// remainDaysFromEndYear = remainDaysFromEndYear - getDay() : it's too long!
		// it's a shorter way
		remainDaysFromEndYear -= getDay();
		return remainDaysFromEndYear;
	}
	
	// calculating the difference from the end of that year : second date
	int endYearDifOfDes()
	{
		remainDaysFromEndYear = ( 12 - getDesMonth() + 1 ) * 30;
		// remainDaysFromEndYear = remainDaysFromEndYear - getDesDay() : it's too long!
		// it's a shorter way
		remainDaysFromEndYear -= getDesDay();
		return remainDaysFromEndYear;
	}
	
	int dateDifInDay()
	{
		// both dates have the same year value (they are in the same year)
		if ( getDesYear() == getYear() )
		{
			if ( endYearDifOfDes() - endYearDif() >= 0 )
			{
				return endYearDifOfDes() - endYearDif();
			}
			return endYearDif() - endYearDifOfDes();
		}

		// each dates have a different year value (they are not in the same year)
		// method : (difference - 1 ) * 360
		else
		{
			if ( getYear() > getDesYear() )
			{
				difYearInDay = 360 * ( getYear() - getDesYear() - 1 );
				return 360 - endYearDif() + endYearDifOfDes() + difYearInDay;
			}
			else
			{
				difYearInDay = 360 * ( getDesYear() - getYear() - 1 );
				return 360 - endYearDifOfDes() + endYearDif() + difYearInDay;
			}
		}
	}
	
private:
	// setting the variables (member data)
	int remainDaysFromEndYear, remainDaysOfEndMonth;
	int year, month, day;
	int desYear, desMonth, desDay;
	int difYearInDay;
};

int main()
{
	// first date year, month, day
	int fy, fm, fd;	
	// second date year, month, day
	int sy, sm, sd;
	
	// ask the user insert first date values
	cout << "Enter YEAR of first date: ";
	cin >> fy;
	cout << "Enter MONTH of first date: ";
	cin >> fm;
	cout << "Enter DAY of first date: ";
	cin >> fd;

	cout << "Enter YEAR of second date: ";
	cin >> sy;
	cout << "Enter MONTH of second date: ";
	cin >> sm;
	cout << "Enter DAY of second date: ";
	cin >> sd;
	
	// remain years, months, days from differece of two dates (in days)
	int ryear, rmonth, rday;
	
	// creating object of class DATE
	// the constrcutor set the initial date (first date)
	DATE dateObj(fy, fm, fd);
	// the setDesDate method set another date (second date)
	dateObj.setDesDate(sy, sm, sd);
	
	// finding the quotient of : total divided by 360 (a complete set of year in days)
	ryear = dateObj.dateDifInDay() / 360;
	// finding the quotient of : remain of days from previous division divided by 30 (a complete set of month in days)
	// calculates from remain of year
	rmonth = dateObj.dateDifInDay() % 360 / 30;
	// finding the quotient of : remain of days from previous division divided by 1 (everything divided by one is that number, so it's not included in the equation)
	// calculates from remain of month
	rday = dateObj.dateDifInDay() % 360 % 30;
	
	// printing the results
	cout << "\n-------------[ R e s u l t ! ]-------------" << endl;
	cout << "Year(s): " << ryear << endl;
	cout << "Month(s): " << rmonth << endl;
	cout << "Day(s): " << rday << endl;
	cout << "-------------------------------------------" << endl;

	
	// use the code below to find the diffrence from end of the year
	/*
	cout << dateObj.endYearDif() << endl;
	cout << dateObj.endYearDifOfDes() << endl;
	*/
	
	// use this code below to find out the difference of two dates in days
	/*
	cout << dateObj.dateDifInDay() << endl;
	*/
}
