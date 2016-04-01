#include "Date.h"



Date::Date(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}


Date::~Date()
{
}

int Date::difference(Date d1, Date d2)
{
	int pom = (d1.day - d2.day) + ((d1.month - d2.month) * 30) + ((d1.year - d2.year) * 365);
	return pom;
}
