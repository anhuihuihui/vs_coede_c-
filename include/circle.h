#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class circle
{
public:
	//设置半径
	void setr(int r);
	
	//获取半径
	int getr();
	
	//设置圆心
	void setCenter(point center);
	
	//获取圆心
	point getCenter();
	
private:
	int c_r;
	//在类中可以让另外一个雷 作为本来中的成员
	point c_center;
};