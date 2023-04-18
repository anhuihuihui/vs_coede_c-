#include"swap.h"
#include<iostream>
using namespace std;
//函数的定义
void swap2(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}