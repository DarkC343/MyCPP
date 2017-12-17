#include <iostream>
using namespace std;

#include "dateLib.h"

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

