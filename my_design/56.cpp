//56��̬��Ա
#include<iostream>
using namespace std;
class person
{
public:

	/*��̬��Ա�����ص㣺
	1 ���ж�����ͬһ������
	2 �ڱ���׶η����ڴ�
	3 ���������������ʼ��*/
	static int m_a;
	int m_c;
	//��̬��Ա����
	//��̬��Ա�����ص㣺
	//1 ������һ������
	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func()
	{
		m_a = 100;  //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		//m_c = 200;  //���󣬲����Է��ʷǾ�̬��Ա����    ��Ϊ�޷�ȷ���������ĸ�����ĳ�Ա����
		cout << "static void func ����" << endl;
	}

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_b;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout << "static void func2 ����" << endl;
	}
};
int person::m_a = 10;
int person::m_b = 10;
void test56a()
{
	person p;
	cout << p.m_a << endl;

	person p1;
	p1.m_a = 200;
	//10,200?
	cout << p.m_a << endl; //200
}
void test56b()
{
	//��̬��Ա���� ������ĳ�������ϣ���Ϊ���ж�����ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1.ͨ��������з���
	person p2;
	cout << p2.m_a << endl;
	//2.ͨ���������з���
	cout << person::m_a << endl;
	//cout << person::m_b << endl; //������ʲ���˽�о�̬��Ա����
}
void test56c()
{
	//��̬��Ա����  ���ַ��ʷ�ʽ  

	//1��ͨ������
	person p3;
	p3.func();

	//2��ͨ������
	person::func();
	//person::func2(); //������ʲ���˽�о�̬��Ա����
}
int main()
{
	//test56a();
	test56b();
	test56c();
	system("pause");
	return 0;
}