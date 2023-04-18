//39函数的默认参数
#include<iostream>
using namespace std;

//函数默认参数

//如果我们自己传入数据，就用自己的数据 ，如果没有，那么就用默认值
//语法：返回值类型 函数名（形参 = 默认值）
int func(int a,int b = 20,int c= 30)
{
	return a + b + c;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//int func2(int a, int b = 10, int c, int d)   //会报错 c d没有默认形参
//{
//	return a + b + c;
//}
//2.如果函数的声明有了默认参数，那么函数实现就不能有默认参数
//int func2(int a =10, int b=10);
//int func2(int a=10,int b=10)   //声明和实现只能有一个有默认参数
//{
//	return a + b;
//}

int main()
{
	cout << func(10) << endl;  //60

	cout << func(10, 30) << endl;//70 b = 30会覆盖掉原本函数的默认值 b =20

	system("pause");
	return 0;
}