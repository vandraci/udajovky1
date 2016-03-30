#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date(int day, int month, int year);
	~Date();

	int difference(Date d1, Date d2);
};

