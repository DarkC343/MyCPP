// Name: AmirMohammad Biuki
// Student No. : 962164023
#include <iostream>
using namespace std;

#include "dateLib.h"

DATE::DATE( int y, int m, int d )
{
	year = y;
	month = m;
	day = d;
}

// setting the second date
void DATE::setDesDate( int y, int m, int d )
{
	desYear = y;
	desMonth = m;
	desDay = d;
}

// get method to recieve the year value of first date
int DATE::getYear() const
{
	return year;
}

// get method to recieve the month value of first date
int DATE::getMonth() const
{
	return month;
}

// get method to recieve the day value of first date
int DATE::getDay() const
{
	return day;
}
// get method to recieve the year value of second date	
int DATE::getDesYear() const
{
	return desYear;
}

// get method to recieve the month value of second date	
int DATE::getDesMonth() const
{
	return desMonth;
}

// get method to recieve the day value of second date	
int DATE::getDesDay() const
{
	return desDay;
}

// calculating the difference from the end of that year : first date
int DATE::endYearDif()
{
	remainDaysFromEndYear = ( 12 - getMonth() + 1 ) * 30;
	// remainDaysFromEndYear = remainDaysFromEndYear - getDay() : it's too long!
	// it's a shorter way
	remainDaysFromEndYear -= getDay();
	return remainDaysFromEndYear;
}

// calculating the difference from the end of that year : second date
int DATE::endYearDifOfDes()
{
	remainDaysFromEndYear = ( 12 - getDesMonth() + 1 ) * 30;
	// remainDaysFromEndYear = remainDaysFromEndYear - getDesDay() : it's too long!
	// it's a shorter way
	remainDaysFromEndYear -= getDesDay();
	return remainDaysFromEndYear;
}

int DATE::dateDifInDay()
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

