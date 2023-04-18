//函数常见样式
#include<iostream>
using namespace std;

//函数常见样式
//1.无参无返
void test01() 
{
	cout << "this is test01" << endl;
}
//2.有参无返
void test02(int a)
{
	cout << "this is test02 a =" << a << endl;
}
//3.无参有返
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}
//4.有参有返
int test04(int a)
{
	cout << "this is test04" << endl;
	return 8888;
}

// 函数声明 创建一个函数 比较两个整型数字的大小，并将较大的值进行返回

//提前告诉编译器函数的存在，可以利用函数的声明
// 有了函数声明之后，函数的定义可以写在main函数之后，不然必须些main函数前面
// 函数的声明可以写多次，但函数的定义只能写一次
int max(int a, int b);

int main()
{
	//1.无参无返函数调用
	test01();

	//2.有参无返函数调用
	int num = 100;
	test02(num);

	//3.无参有返函数调用
	int num2 = test03();
	cout <<"num2=" << num2 << endl;

	//4.有参有返返函数调用
	int num3 = 5600;
	int num4 = test04(num3);
	cout << "num4= " << num4 << endl;

	//函数声明

	int a = 100;
	int b = 200;
	max(a, b);
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;  //三目运算符
}
