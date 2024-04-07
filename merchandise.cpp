#include "merchandise.h"
void merchandise::input()
{
	char ch;
	do
	{
		cin>>g[category];
		category++;
		cout<<"已经有商品"<<category<<"种，要继续录入吗？Y/N"<<endl;
		cin>>ch;
	}while(toupper(ch)=='Y');
}
void merchandise::sort_by_id()
{
	for(int i=0;i<category;i++)
	{
		for(int j=0;j<category-1;j++)
		{
			if(g[j].getid()>g[j+1].getid())
			{
				Goods temp;
				temp=g[j];
				g[j]=g[j+1];
				g[j+1]=temp;
			}
		}
	}
}
void merchandise::show()
{
	for(int i=0;i<category;i++)
	{
		cout<<g[i]<<endl;
	}
}
void merchandise::find_by_id()
{
	string temp;
	cout<<"请输入商品ID"<<endl;
	cin>>temp;
	int f=0;
	for(int i=0;i<category;i++)
	{
		if(temp==g[i].getid())
		{
			cout<<g[i];
			f=1;
			break;
		}
	}
	if(f==0)
		cout<<"没找到！！";
	show();
}
void merchandise::delete_by_name()
{
	cout << "请输入要删除的商品的名称：" << endl;
	string temp;
	cin >> temp;
	int j = 0;//g[0]-g[category-1]  所有的非temp的名称————商品 g[]
	for (int i = 0; i < category; i++)
	{
		if (temp != g[i].getname())//删除g[i],使用后继元素进行覆盖。g[i]=g[i+1]  i-->category-1
			g[j++] = g[i];
	}
	Goods defult;
	for (int k = j; k < category; k++)
		g[k] = defult;
	category = j;
	cout << "当前商品种类数为：" << category << endl;

}
void merchandise::savetofile()
{
	ofstream ofile;
	ofile.open("e:\\商品销售信息.txt");
	ofile << "编号\t名称\t进价\t库存\t销售数量\t供应商\t进货日期";
	for (int i = 0; i < category; i++)
		ofile << g[i];
	ofile.close();
}
void merchandise::filetogoods()
{
	ifstream ifile;
	ifile.open("e:\\商品销售信息.txt");
	string s1,s2,s3,s4,s5,s6,s7,s8;
	ifile >> s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
	cout << s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;
	while (!ifile.eof())
	{
		ifile >> g[category++];
	}
	show();
}