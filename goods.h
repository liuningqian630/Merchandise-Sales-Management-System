#ifndef GOODS_H
#define GOODS_H

#include <string>
#include <iostream>
#include "2101230063ÁõÄþå¹/Project15/Project15/date.h"
#include <fstream>
using namespace std;
class Goods
{
	string id;
	string name;
	float iprice;
	int amount;
	float oprice;
	int salecount;
	string gys;
	int year;
	int month;
	int day;
	//string date;
	Date D;
public:
	Goods(string id="00",string name="nothing",float iprice=0,int amount=0,float oprice=0,int salecount=0,string gys="wf",int year=1990,int month=1,int day=1)
	{	this->id=id;
		this->name=name;
		this->iprice=iprice;
		this->amount=amount;
		this->oprice=oprice;
		this->salecount=salecount;
		this->gys=gys;
		this->year = year;
		this->month = month;
		this->day = day;
};
	friend istream & operator >> (istream & is,Goods &go);
	friend ostream & operator << (ostream & os,const Goods &go);
	string getid(){return id;};
	string getname(){return name;};
	float getiprice(){return iprice;};
	int getamount(){return amount;};
	float getoprice(){return oprice;};
	int getsalsecount();
	string getgys() { return gys; }
	//string getdate();
	int getyear() { return D.getyear(); }
	int getmonth() { return D.getmonth(); }
	int getday() { return D, getday(); }
	void setid(string id){this->id=id;}
	void setname(string na){this->name=name;}
	void setiprice(float ip){this->iprice;}
	void setamount(int am){this->amount;}
	void setoprice(float op){this->oprice;}
	void setsalsecount(int sa){this->salecount;}
	void setgys(string g){this->gys;}
	//void setdate(string d){this->date;}
	void setyear(int y = 0) { D.setyear(y);}
	void setmonth(int m = 0) { D.setmonth(m); }
	void setday(int d = 0) { D.setday(d); }
};
#endif