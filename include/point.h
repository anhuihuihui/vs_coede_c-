#pragma once//防止头文件重复包含
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