//47点和圆的关系
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//点和圆关系案例
//点类
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
////圆类
//class circle
//{
//public:
//	//设置半径
//	void setr(int r)
//	{
//		c_r =r;
//	}
//	//获取半径
//	int getr()
//	{
//		return c_r;
//	}
//	//设置圆心
//	void setCenter(point center)
//	{
//		c_center = center;
//	}
//	//获取圆心
//	point getCenter()
//	{
//		return c_center;
//	}
//private:
//	int c_r;
//	point c_center;
//};
//判断点和圆的关系
void isInCircle(point &p,circle &c)
{
	//计算两点之间的距离
	int distance =
		(c.getCenter().getP_x() - p.getP_x()) * (c.getCenter().getP_x() - p.getP_x())
		+ (c.getCenter().getP_y() - p.getP_y()) * (c.getCenter().getP_y() - p.getP_y());
	//计算半径的平方
	int Rdistance = c.getr() * c.getr();
	//判断点和圆的关系
	if (distance == Rdistance)
	{
		cout << "点在圆上\n";
	}
	else if (distance > Rdistance)
	{
		cout << "点在圆外\n";
	}   
	else
	{
		cout << "点在圆内\n";
	}
}
int main()
{
	//创建点
	point p1;
	p1.setP_x(10);
	p1.setP_y(10);

	point cp;
	cp.setP_x(10);
	cp.setP_y(0);

	//创建圆
	circle c1;
	c1.setCenter(cp);

	//判断关系
	isInCircle(p1, c1);
	
	system("pause");
	return 0;
}