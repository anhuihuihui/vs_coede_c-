//62类做友元
#include<iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();//参观函数 访问building中的属性
	Building* building; //指针
};
class Building
{
	//GoodGay类是building的好朋友，可以访问本类中私有成员
	friend class GoodGay;
public:
	Building();
public:
	string m_sittingRoom; // 客厅
private:
	string m_bedRoom; //卧室
};
//类外写构造（成员）函数
Building::Building()
{
	m_sittingRoom = "客厅";
	this->m_bedRoom = "卧室";
}
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}
void test62a()
{
	GoodGay gg;
	gg.visit();
}
void GoodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_sittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_bedRoom << endl;
}
int main()
{
	test62a();
	system("pause");
	return 0;
}