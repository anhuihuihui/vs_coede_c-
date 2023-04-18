//55类对象作为类成员
#include<iostream>
using namespace std;
#include<string>
//类对象作为类成员

//手机类
class phone
{
public:
	string p_name;
	phone(string pname)
	{
		p_name = pname;
		cout << "Phone构造" << endl;
	}
	~phone()
	{
		cout << "调用phone的析构函数" << endl;
	}
};
class person
{
public:
	person(string name,string pname):m_name(name),ph(pname)
	{
		cout << "Person构造" << endl;
	}
	//姓名
	string m_name;
	//手机
	phone ph;
	~person()
	{
		cout << "调用person的析构函数" << endl;
	}

};

//当其他类对象作为本类的成员，构造时候先构造类对象，再构造类本身，析构的顺序d与构造相反
void test55a()
{
	person p("张三","苹果11");
	
	cout << p.m_name << "拿着" << p.ph.p_name << "手机" << endl;
}
int main()
{
	test55a();

	system("pause");
	return 0;
}