#include"goods.h"
#include<iomanip>
Goods::Goods(string id, string name, float iprice, int amout, float oprice, int salecount string gys, int year, int month, int day):D(y,m,d)
{
	id = id;
	name = name;
	iprice = iprice;
	amout = am;
	oprice = oprice;
	salecout = salecout;
	gys = gys;
	//date = date;
}
istream& operator>>(istream& is, Goods& go)
{
	if (is == cin)
	{
		cout << "请输入商品编号，商品名称，进货价格，库存数量，销售价格，销售数量，供应商，进货日期(年月日用空格或Tab键间隔)" << endl;
		
	}
	is >> go.id >> go.name >> go.iprice >> go.amount >> go.oprice >> go.salecount >> go.gys >> go.D;
	return is;
	
}
ostream& operator<<(ostream & os,const Goods & go)
{
	
	cout << "商品编号\t商品名称\t进货价格\t库存数量\t销售价格\t销售数量\t供应商\t进货日期" << endl;
	os<< go.id << setw(8) << '\t' << go.name << setw(10) << '\t' << go.iprice << setw(10) << '\t' << go.amount << setw(10) << '\t' << go.oprice << setw(10) << '\t' << go.salecount << setw(10) << '\t' << go.gys << setw(6) << '\t' << go.D << endl;
	return os;
}