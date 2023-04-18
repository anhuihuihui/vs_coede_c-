//58this指针
#include<iostream>
using namespace std;

class person
{
public:
	int age;
	person(int age)
	{
		//this 指针指向 被调用的成员函数 所属的对象 
		this->age = age;
	}
	person &personAddage(person &p)
	{
		this->age += p.age;
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}
};
// 1.解决名称冲突
void test58a()
{
	person p(18);
	cout << "p的年龄为：" << p.age << endl;
}
//2.返回对象本身用*this
void test58b()
{
	person p1(10);
	person p2(10);
	p2.personAddage(p1);
	cout<< "p2的年龄为：" << p2.age << endl;
	p2.personAddage(p1).personAddage(p1).personAddage(p1).personAddage(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main()
{

	test58a();
	test58b();


	system("pause");
	return 0;
}