#include<iostream>
using namespace std;
#include "point.h"
#include "circle.h"
//点和圆关系案例
//点类

//设置半径
void circle::setr(int r)
{
	c_r = r;
}
//获取半径
int circle::getr()
{
	return c_r;
}
//设置圆心
void circle::setCenter(point center)
{
	c_center = center;
}
//获取圆心
point circle::getCenter()
{
	return c_center;
}
