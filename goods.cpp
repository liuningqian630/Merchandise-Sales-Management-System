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
		cout << "��������Ʒ��ţ���Ʒ���ƣ������۸񣬿�����������ۼ۸�������������Ӧ�̣���������(�������ÿո��Tab�����)" << endl;
		
	}
	is >> go.id >> go.name >> go.iprice >> go.amount >> go.oprice >> go.salecount >> go.gys >> go.D;
	return is;
	
}
ostream& operator<<(ostream & os,const Goods & go)
{
	
	cout << "��Ʒ���\t��Ʒ����\t�����۸�\t�������\t���ۼ۸�\t��������\t��Ӧ��\t��������" << endl;
	os<< go.id << setw(8) << '\t' << go.name << setw(10) << '\t' << go.iprice << setw(10) << '\t' << go.amount << setw(10) << '\t' << go.oprice << setw(10) << '\t' << go.salecount << setw(10) << '\t' << go.gys << setw(6) << '\t' << go.D << endl;
	return os;
}