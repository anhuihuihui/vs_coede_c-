//44封装的权限控制
#include<iostream>
using namespace std;
#include<string>

//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问    //protectde 与 private 的关键区别主要在继承中体现  儿子可以访问父亲protected内容  不能访问private中的内容

class Person
{
public:
	string name;
protected:
	string car;
private:
	int Password;
public:
	void func()
	{
		car = "拖拉机";    //保护权限内容，在类内访问不到
		Password = 123456; //私有权限内容，在类内访问不到
	}
};

class C1
{
	int m_A; //默认权限 是私有-

};
struct C2
{
	int m_A; //默认权限 是公共
};

int main()
{
	Person p1;
	p1.name = "李四";
	//p1.car = "奔驰";  //保护权限内容，在类外访问不到
	//p1.Password = 123; //私有权限内容，在类外访问不到


	//struct与class的区别
	//在C++中 struct和class唯一的区别就在于 默认的访问权限不同
	//struct 默认权限为公共 public
	//class 默认权限为私有 private

	C1 c1;
	//c1.m_A = 6;

	C2 c2;
	c2.m_A = 10;

	system("pause");
	return 0;
}