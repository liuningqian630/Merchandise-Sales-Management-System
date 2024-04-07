#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int year = 1900, int month = 1, int day = 1);
	void setyear(int y = 0) { year = y; }
	void setmonth(int m = 0) { month = m; }
	void setday(int d = 0) { day = d; }
	int getyear() { return year; }
	int getmonth() { return month;}
	int getday() { return day; }
friend ostream & operator<<(ostream & os, const Date &d);
friend istream & operator>>(istream & is, Date &d);
};
#endif
