#include "goods.h"
#include "merchandise.h"
void menu()
{
	cout <<"��ӭʹ����Ʒ���۷���ϵͳ" << endl;
	cout <<"		  (1)���" << endl;
	cout <<"		  (2)��ʾ" << endl;
	cout <<"		  (3)����" << endl;
	cout <<"		  (4)����" << endl;
	cout <<"		  (5)ɾ��" << endl;
	cout <<"		  (6)�˵�" << endl;
	cout <<"		  (7)����" << endl;
	cout <<"          (8)���ļ�" << endl;
	cout <<"		  (9)�˳�" << endl;
}
int main()
{
	merchandise m;
	int c;
	menu();
	for( ; ; )
	{	cout<<"��ѡ��1-6��"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:m.input();break;
			case 2:m.show();break;
			case 3:m.find_by_id();break;
			case 4:m.sort_by_id();break;
			case 5:m.delete_by_name(); break;
			case 6:menu();break;
			case 7:m.savetofile(); break;
			case 8:m.filetogoods(); break;
			case 9:cout<<"ллʹ�ñ�ϵͳ"<<endl;return 0;
 		}
	}
	
	system("pause");
	return 0;
}