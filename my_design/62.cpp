//62������Ԫ
#include<iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();//�ιۺ��� ����building�е�����
	Building* building; //ָ��
};
class Building
{
	//GoodGay����building�ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay;
public:
	Building();
public:
	string m_sittingRoom; // ����
private:
	string m_bedRoom; //����
};
//����д���죨��Ա������
Building::Building()
{
	m_sittingRoom = "����";
	this->m_bedRoom = "����";
}
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}
void test62a()
{
	GoodGay gg;
	gg.visit();
}
void GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_bedRoom << endl;
}
int main()
{
	test62a();
	system("pause");
	return 0;
}