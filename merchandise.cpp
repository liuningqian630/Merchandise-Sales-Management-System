#include "merchandise.h"
void merchandise::input()
{
	char ch;
	do
	{
		cin>>g[category];
		category++;
		cout<<"�Ѿ�����Ʒ"<<category<<"�֣�Ҫ����¼����Y/N"<<endl;
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
	cout<<"��������ƷID"<<endl;
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
		cout<<"û�ҵ�����";
	show();
}
void merchandise::delete_by_name()
{
	cout << "������Ҫɾ������Ʒ�����ƣ�" << endl;
	string temp;
	cin >> temp;
	int j = 0;//g[0]-g[category-1]  ���еķ�temp�����ơ���������Ʒ g[]
	for (int i = 0; i < category; i++)
	{
		if (temp != g[i].getname())//ɾ��g[i],ʹ�ú��Ԫ�ؽ��и��ǡ�g[i]=g[i+1]  i-->category-1
			g[j++] = g[i];
	}
	Goods defult;
	for (int k = j; k < category; k++)
		g[k] = defult;
	category = j;
	cout << "��ǰ��Ʒ������Ϊ��" << category << endl;

}
void merchandise::savetofile()
{
	ofstream ofile;
	ofile.open("e:\\��Ʒ������Ϣ.txt");
	ofile << "���\t����\t����\t���\t��������\t��Ӧ��\t��������";
	for (int i = 0; i < category; i++)
		ofile << g[i];
	ofile.close();
}
void merchandise::filetogoods()
{
	ifstream ifile;
	ifile.open("e:\\��Ʒ������Ϣ.txt");
	string s1,s2,s3,s4,s5,s6,s7,s8;
	ifile >> s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
	cout << s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;
	while (!ifile.eof())
	{
		ifile >> g[category++];
	}
	show();
}