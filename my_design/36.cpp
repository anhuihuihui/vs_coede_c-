//36引用做函数参数
#include<iostream>
using namespace std;

//交换函数

//1.值传递
void mySwap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void mySwap02(int* a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b); //值传递 形参不会改变实参
	 
	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;

	mySwap02(&a, &b); //地址传递 形参会改变实参  a与b会进行交换

	cout << "swap02 a= " << a << endl;
	cout << "swap02 b= " << b << endl;

	mySwap03(a, b);//引用传递 形参会改变实参  a与b会进行再一次的交换

	cout << "swap03 a= " << a << endl;
	cout << "swap03 b= " << b << endl;

	system("pause");
	return 0;
}