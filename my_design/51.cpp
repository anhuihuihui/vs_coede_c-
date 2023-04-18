//51拷贝构造函数调用时机
#include<iostream>
using namespace std;

class person
{
public:
	int age;
	//无参构造函数 也称 默认构造函数
	person()
	{
		cout << "调用无参构造函数" << endl;
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

//2.值传递的方式给函数参数传值
void dowork(person p1)
{

}
void test51b()
{
	person p;
	dowork(p);
}
 //3. 值方式返回局部对象
person dowork2()
{
	person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test51c()
{
	person p2 = dowork2();
	cout << (int*)&p2 << endl;
}
//构造函数的调用
void test51a()
{
	person p1; 
	person p2(10); 
	person p3(p2);
	              
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;
}
int main()
{
	//test51a();
	//test51b();
	test51c();
	//person p;

	system("pause");
	return 0;
}
