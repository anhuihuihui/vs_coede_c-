//成员函数
#include<iostream>
using namespace std;
class Building62;
class GoodGay62
{
public:
	GoodGay62();
	void visit();  //参观函数 访问building中的私有成员
	void visit2(); //不可以访问building中的私有成员
	Building62* building; //指针
};
class Building62
{
	//GoodGay类下的visit成员函数是building的好朋友，可以访问中私有成员
	friend void GoodGay62::visit();
public:
	Building62();
public:
	string m_sittingRoom; // 客厅
private:
	string m_bedRoom; //卧室
};
//类外实现成员函数
Building62::Building62()
{
	m_sittingRoom = "客厅";
	m_bedRoom = "卧室";
}
GoodGay62::GoodGay62()
{
	building = new Building62;
}
void GoodGay62::visit()
{
	cout << "visit正在访问：" << building->m_sittingRoom << endl;
	cout << "visit正在访问：" << building->m_bedRoom << endl;
}
void GoodGay62::visit2()
{
	cout << "visit2正在访问：" << building->m_sittingRoom << endl;
	//cout << "visit2正在访问：" << building->m_bedRoom << endl;
}
void test63a()
{
	GoodGay62 gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test63a();

	system("pause");
	return 0;
}