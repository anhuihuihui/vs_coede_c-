//��Ա����
#include<iostream>
using namespace std;
class Building62;
class GoodGay62
{
public:
	GoodGay62();
	void visit();  //�ιۺ��� ����building�е�˽�г�Ա
	void visit2(); //�����Է���building�е�˽�г�Ա
	Building62* building; //ָ��
};
class Building62
{
	//GoodGay���µ�visit��Ա������building�ĺ����ѣ����Է�����˽�г�Ա
	friend void GoodGay62::visit();
public:
	Building62();
public:
	string m_sittingRoom; // ����
private:
	string m_bedRoom; //����
};
//����ʵ�ֳ�Ա����
Building62::Building62()
{
	m_sittingRoom = "����";
	m_bedRoom = "����";
}
GoodGay62::GoodGay62()
{
	building = new Building62;
}
void GoodGay62::visit()
{
	cout << "visit���ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "visit���ڷ��ʣ�" << building->m_bedRoom << endl;
}
void GoodGay62::visit2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_sittingRoom << endl;
	//cout << "visit2���ڷ��ʣ�" << building->m_bedRoom << endl;
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