#include "goods.h"
#include "merchandise.h"
void menu()
{
	cout <<"欢迎使用商品销售服务系统" << endl;
	cout <<"		  (1)添加" << endl;
	cout <<"		  (2)显示" << endl;
	cout <<"		  (3)查找" << endl;
	cout <<"		  (4)排序" << endl;
	cout <<"		  (5)删除" << endl;
	cout <<"		  (6)菜单" << endl;
	cout <<"		  (7)保存" << endl;
	cout <<"          (8)读文件" << endl;
	cout <<"		  (9)退出" << endl;
}
int main()
{
	merchandise m;
	int c;
	menu();
	for( ; ; )
	{	cout<<"请选择（1-6）"<<endl;
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
			case 9:cout<<"谢谢使用本系统"<<endl;return 0;
 		}
	}
	
	system("pause");
	return 0;
}