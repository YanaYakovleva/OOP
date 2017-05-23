#include "DateString.h"


DateString::DateString()
{
	initDate();
}
DateString::DateString(String s) : String(s)
{
	initDate();
}

DateString::DateString(String s, int day, int month, int year) : String(s)
{
	if (year < 2017)
		throw InvalidDateException("Incorrect date!\n");
	else yy = year;

	if (month < 0 || month>12)
		throw InvalidDateException("Incorrect date!\n");
	else mm = month;

	if (day<1 || day > topDay(month))
		throw InvalidDateException("Incorrect date!\n");
	else dd = day;

}

DateString::~DateString()
{

}

void DateString::initDate()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	yy = 1900 + ltm->tm_year;
	mm = 1 + ltm->tm_mon;
	dd = ltm->tm_mday;
}

int DateString::topDay(int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return 29;
	default:
		return -1;
	}
}

void DateString::show()
{
	String::show();
	std::cout << dd << "." << mm << "." << yy << std::endl;

}

const int DateString::getDay()
{
	return dd;
}

const int DateString::getMonth()
{
	return mm;
}

const int DateString::getYear()
{
	return yy;
}

DateString & DateString::setDay(int day)
{
	if (day<1 || day > topDay(mm))
		throw InvalidDateException("Incorrect day!\n");
	else dd = day;
	
	return *this;
}

DateString & DateString::setMonth(int month)
{
	if (month < 0 || month>12)
		throw InvalidDateException("Incorrect month!\n");
	else mm = month;
	
	return *this;
}

DateString & DateString::setYear(int year)
{
	if (year < 2017)
		throw InvalidDateException("Incorrect day!\n");
	else yy = year;
	
	return *this;
}

DateString & DateString::operator=(DateString & rhs)
{
	if (&rhs == this)
		return *this;
	dd = rhs.dd;
	mm = rhs.mm;
	yy = rhs.yy;
	String::operator=(rhs);

	return *this;
}
