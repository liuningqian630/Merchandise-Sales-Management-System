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
	void input();//�����Ʒ
	void show();//��ʾ��Ʒ
	void find_by_id();//��ѯ��Ʒ
	void sort_by_id();//��������򡪡���������
	void delete_by_name();//������ɾ��
	void savetofile();//����
	void filetogoods();//���ļ�
};
#endif