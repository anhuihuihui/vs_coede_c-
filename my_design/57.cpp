//57成员变量和成员函数分开存储
#include<iostream>
using namespace std;
//成员变量和成员函数是分开存储的
class person
{

};
class student
{
public:

	int num;//非静态成员变量  属于类的对象上的

	static int num_b;//静态成员变量  不属于类的对象

	void func() {}//非静态成员函数  独一份存储的 不属于累的对象上的

	static void func2() {}//静态成员函数  独一份存储的 不属于累的对象上的
};
void test57a()
{
	person p;
	//空对象占用内存空间为1
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p= " << sizeof(p) << endl;
}
void test57b()
{
	student s;
	cout << "size of s= " << sizeof(s)<<endl;
}
int main()
{
	test57a();
	test57b();

	system("pause");
	return 0;
}