#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;
class point
{
public:
	void setP_x(int x);

	int getP_x();

	void setP_y(int y);
	
	int getP_y();
	
private:
	int p_x;

	int p_y;
};