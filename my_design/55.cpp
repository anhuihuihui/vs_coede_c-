//55�������Ϊ���Ա
#include<iostream>
using namespace std;
#include<string>
//�������Ϊ���Ա

//�ֻ���
class phone
{
public:
	string p_name;
	phone(string pname)
	{
		p_name = pname;
		cout << "Phone����" << endl;
	}
	~phone()
	{
		cout << "����phone����������" << endl;
	}
};
class person
{
public:
	person(string name,string pname):m_name(name),ph(pname)
	{
		cout << "Person����" << endl;
	}
	//����
	string m_name;
	//�ֻ�
	phone ph;
	~person()
	{
		cout << "����person����������" << endl;
	}

};

//�������������Ϊ����ĳ�Ա������ʱ���ȹ���������ٹ����౾��������˳��d�빹���෴
void test55a()
{
	person p("����","ƻ��11");
	
	cout << p.m_name << "����" << p.ph.p_name << "�ֻ�" << endl;
}
int main()
{
	test55a();

	system("pause");
	return 0;
}