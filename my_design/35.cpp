//35引用的基本语法
#include<iostream>
using namespace std;

int main()
{
	//引用的基本语法
	//数据类型 &别名 = 原名
	int a = 10;

	//创建引用
	int& b = a;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	b = 20;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	//1.引用必须初始化
	// int &b;  //这是错的，必须初始化 有指向值 	int& b = a;
	//2.引用在初始化后，不可以改变
	int c = 20;
	b = c; //赋值操作，而不是更改引用

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}