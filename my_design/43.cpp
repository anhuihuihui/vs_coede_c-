#include<iostream>
using namespace std;

//����ѧ���� ������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class student
{
public:
	//����
	string m_name;
	int m_id;
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_name << " ѧ�ţ� " << m_id << endl;
	}
	void setName(string name)
	{
		m_name = name;
	}
	void setId(int id)
	{
		m_id = id;
	}
};
int main()
{
	//����һ���;����ѧ��   ʵ��������
	student S;
	
	//��s1���� �������Ը�ֵ����
	/*S.m_name = "����";
	S.m_id = 4625051;*/
	S.setName("����");
	S.setId(4625051);
	S.showStudent();
	


	system("pause");
	return 0;
}