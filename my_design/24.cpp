//指针数组和函数
#include<iostream>
using namespace std;
#include "swap.h"
void swap(int* p1, int* p2);

int main()
{
	int a = 10;
	int b = 20;
	//指针和函数
	//1.值传递
	swap2(a, b);
	cout <<"值传递" << "a= " << a << endl;
	cout <<"值传递" << "b= " << b << endl;

	//2.地址传递
	//如果是地址传递，可以修改实参
	swap(&a, &b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}
void swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
