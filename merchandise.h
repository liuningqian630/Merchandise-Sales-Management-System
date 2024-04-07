#include <iostream>
#include "goods.h"
#ifndef MERCHANDISE_H
#define MERCHANDISE_H
using namespace std;
class merchandise
{
	Goods g[100];
	int category;
public:
	merchandise(int c=0){category=c;};
	void input();//添加商品
	void show();//显示商品
	void find_by_id();//查询商品
	void sort_by_id();//按编号排序————升序
	void delete_by_name();//按名称删除
	void savetofile();//保存
	void filetogoods();//读文件
};
#endif