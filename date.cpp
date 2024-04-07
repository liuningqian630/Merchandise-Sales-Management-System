#include "date.h"
#include<iostream>
using namespace std;
Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
ostream & operator <<(ostream & os, const Date& d)
{
	os << d.year << " " << d.month << " " << d.day << endl;
	return os;

}
istream & operator >>(istream & is, Date & d)
{
	is >> d.year >> d.month >> d.day;
	return is;
}

