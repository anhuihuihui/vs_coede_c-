//53�����ǳ����
#include<iostream>
using namespace std;

class person
{
public:
	int age;//����
	int* m_height;//���
	//�޲ι��캯�� Ҳ�� Ĭ�Ϲ��캯��
	person()
	{
		cout << "����Ĭ���޲ι��캯��" << endl;
	}
	//�вι��캯�� �����������أ�
	person(int a,int height)
	{
		age = a;
		m_height = new int(height);
		cout << "�����вι��캯��" << endl;
	}
	//��������
	person(const person& p)
	{
		age = p.age;
		cout << "aaa" << endl;
		cout << "���ÿ������캯��" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		//���
		m_height = new int(*p.m_height);
		cout << p.m_height <<endl;
	}
	~person()
	{
		//�������룬���������ٵ��������ͷŲ���
		if (m_height != NULL)
		{
			delete m_height;
			//m_height = NULL;
		}
		cout << "������������" << endl;
	}
};
void test53a()
{
	person p(18,160);
	cout << "p������Ϊ��" << p.age <<" p�����Ϊ��"<< *p.m_height << endl;
	cout << p.m_height << endl;
	person p1(p);
	cout << "p1������Ϊ��" << p1.age << " p1�����Ϊ��" << p1.m_height  << endl;
	cout << p1.m_height << endl;
}
int main()
{
	test53a();




	system("pause");
	return 0;
}