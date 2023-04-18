//52构造函数的调用规则
#include<iostream>
using namespace std;

/*默认情况下，c++编译器至少给一个类添加3个函数

1．默认构造函数(无参，函数体为空)
2．默认析构函数(无参，函数体为空)
3．默认拷贝构造函数，对属性进行值拷贝

构造函数调用规则如下：
如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
如果用户定义拷贝构造函数，c++不会再提供其他构造函数*/
class person
{
public:
	int age;
	//无参构造函数 也称 默认构造函数
	person()
	{
		cout << "调用默认无参构造函数" << endl;
	}
	//有参构造函数 （函数的重载）
	person(int a)
	{
		age = a;
		cout << "调用有参构造函数" << endl;
	}
	//拷贝构造
	person(const person& p)
	{
		age = p.age;
		cout << "调用拷贝构造函数" << endl;
	}
	~person()
	{
		cout << "调用析构函数" << endl;
	}
};
void test52a()
{
	person p;
	p.age = 30;
	person p1(p);
	cout << "p2的年龄为：" << p1.age << endl;
}
void test52b()
{
		//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
		person p7; //此时如果用户自己没有提供默认构造，会出错
		person p2(10); //用户提供的有参
		person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

		//如果用户提供拷贝构造，编译器不会提供其他构造函数
		person p4; //此时如果用户自己没有提供默认构造，会出错
		person p5(10); //此时如果用户自己没有提供有参，会出错
		person p6(p5); //用户自己提供拷贝构造


}
int main()
{
	test52a();
	test52b();



	system("pause");
	return 0;
}