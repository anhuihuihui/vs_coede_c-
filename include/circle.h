#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class circle
{
public:
	//���ð뾶
	void setr(int r);
	
	//��ȡ�뾶
	int getr();
	
	//����Բ��
	void setCenter(point center);
	
	//��ȡԲ��
	point getCenter();
	
private:
	int c_r;
	//�����п���������һ���� ��Ϊ�����еĳ�Ա
	point c_center;
};