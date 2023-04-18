//40函数占位参数
#include<iostream>
using namespace std;

// 占位参数
// 返回值类型 函数名(数据类型){}
// 目前阶段的占位参数 我们还用不到，后面课程中会用到
// 占位参数 还可以有默认参数
void func(int a,int = 10 )
{
	cout << "this is func  " << endl;

}


//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1.同一作用域下
//2.函数名称相同
//3.函数的参数类型不同，或者个数不同，或者顺序不同
void func2()
{
	cout << "func2 的调用" << endl;
}
//个数不同
void func2(int a)
{
	cout << "func2(int a) 的调用" << endl;
}
//类型不同
void func2(double a)
{
	cout << "func2(double a) 的调用" << endl;
}
//顺序不同
void func2(int a,double b)
{
	cout << "func2(int a,double b) 的调用" << endl;
}
void func2(double b,int a)
{
	cout << "func2(double b,int a) 的调用" << endl;
}
//注意事项
//函数的返回值不能作为函数重载的条件
int main()
{
	func(10); // func(10, 10); 第二个10-不用传递

	func2();
	func2(10);
	func2(3.14);
	func2(3.14, 10);
	system("pause");
	return 0;
}