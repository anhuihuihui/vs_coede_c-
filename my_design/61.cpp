//61ȫ�ֺ�������Ԫ
#include<iostream>
using namespace std;

class building
{
	//ȫ�ֺ�������Ԫ  friend
	friend void goodGay(building* build);

public:
	building()
	{
		m_sittingRoom = "����";
		this->m_bedRoom = "����";

	}
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
};

//ȫ�ֺ���
void goodGay(building* build)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << build->m_sittingRoom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << build->m_bedRoom << endl;
}
void test61a()
{
	building build1;
	goodGay(&build1);
}
int main()
{
	test61a();

	system("pause");
	return 0;
}