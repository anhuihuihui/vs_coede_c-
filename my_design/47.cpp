//47���Բ�Ĺ�ϵ
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//���Բ��ϵ����
//����
//class point
//{
//public:
//	void setP_x(int x)
//	{
//		p_x = x;
//	}
//	int getP_x()
//	{
//		return p_x;
//	}
//	void setP_y(int y)
//	{
//		p_y = y;
//	}
//	int getP_y()
//	{
//		return p_y;
//	}
//private:
//	int p_x;
//	int p_y;
//};
////Բ��
//class circle
//{
//public:
//	//���ð뾶
//	void setr(int r)
//	{
//		c_r =r;
//	}
//	//��ȡ�뾶
//	int getr()
//	{
//		return c_r;
//	}
//	//����Բ��
//	void setCenter(point center)
//	{
//		c_center = center;
//	}
//	//��ȡԲ��
//	point getCenter()
//	{
//		return c_center;
//	}
//private:
//	int c_r;
//	point c_center;
//};
//�жϵ��Բ�Ĺ�ϵ
void isInCircle(point &p,circle &c)
{
	//��������֮��ľ���
	int distance =
		(c.getCenter().getP_x() - p.getP_x()) * (c.getCenter().getP_x() - p.getP_x())
		+ (c.getCenter().getP_y() - p.getP_y()) * (c.getCenter().getP_y() - p.getP_y());
	//����뾶��ƽ��
	int Rdistance = c.getr() * c.getr();
	//�жϵ��Բ�Ĺ�ϵ
	if (distance == Rdistance)
	{
		cout << "����Բ��\n";
	}
	else if (distance > Rdistance)
	{
		cout << "����Բ��\n";
	}   
	else
	{
		cout << "����Բ��\n";
	}
}
int main()
{
	//������
	point p1;
	p1.setP_x(10);
	p1.setP_y(10);

	point cp;
	cp.setP_x(10);
	cp.setP_y(0);

	//����Բ
	circle c1;
	c1.setCenter(cp);

	//�жϹ�ϵ
	isInCircle(p1, c1);
	
	system("pause");
	return 0;
}