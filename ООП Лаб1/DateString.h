#pragma once
#include "String.h"
#include "Exception.h"
#include <ctime>

class DateString :public String
{
	int dd, mm, yy;
	void initDate();
	int topDay(int);
public:
	DateString();
	DateString(String);
	DateString(String, int, int, int);
	~DateString();

	void show();
	
	const int getDay();
	const int getMonth();
	const int getYear();
	DateString& setDay(int);
	DateString& setMonth(int);
	DateString& setYear(int);

	DateString & operator=(DateString & rhs);
};