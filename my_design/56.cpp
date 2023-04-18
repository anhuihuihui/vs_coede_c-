//56静态成员
#include<iostream>
using namespace std;
class person
{
public:

	/*静态成员变量特点：
	1 所有对象共享同一份数据
	2 在编译阶段分配内存
	3 类内声明，类外初始化*/
	static int m_a;
	int m_c;
	//静态成员函数
	//静态成员函数特点：
	//1 程序共享一个函数
	//2 静态成员函数只能访问静态成员变量
	static void func()
	{
		m_a = 100;  //静态成员函数只能访问静态成员变量
		//m_c = 200;  //错误，不可以访问非静态成员变量    因为无法确定到底是哪个对象的成员变量
		cout << "static void func 调用" << endl;
	}

	//静态成员变量也是有访问权限的
private:
	static int m_b;

	//静态成员函数也是有访问权限的
	static void func2()
	{
		cout << "static void func2 调用" << endl;
	}
};
int person::m_a = 10;
int person::m_b = 10;
void test56a()
{
	person p;
	cout << p.m_a << endl;

	person p1;
	p1.m_a = 200;
	//10,200?
	cout << p.m_a << endl; //200
}
void test56b()
{
	//静态成员变量 不属于某个对象上，因为所有对象共享同一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	person p2;
	cout << p2.m_a << endl;
	//2.通过类名进行访问
	cout << person::m_a << endl;
	//cout << person::m_b << endl; //类外访问不到私有静态成员变量
}
void test56c()
{
	//静态成员函数  两种访问方式  

	//1、通过对象
	person p3;
	p3.func();

	//2、通过类名
	person::func();
	//person::func2(); //类外访问不到私有静态成员函数
}
int main()
{
	//test56a();
	test56b();
	test56c();
	system("pause");
	return 0;
}