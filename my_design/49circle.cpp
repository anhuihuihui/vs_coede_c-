#include<iostream>
using namespace std;
#include "point.h"
#include "circle.h"
//���Բ��ϵ����
//����

//���ð뾶
void circle::setr(int r)
{
	c_r = r;
}
//��ȡ�뾶
int circle::getr()
{
	return c_r;
}
//����Բ��
void circle::setCenter(point center)
{
	c_center = center;
}
//��ȡԲ��
point circle::getCenter()
{
	return c_center;
}
