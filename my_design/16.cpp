//����������ʽ
#include<iostream>
using namespace std;

//����������ʽ
//1.�޲��޷�
void test01() 
{
	cout << "this is test01" << endl;
}
//2.�в��޷�
void test02(int a)
{
	cout << "this is test02 a =" << a << endl;
}
//3.�޲��з�
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}
//4.�в��з�
int test04(int a)
{
	cout << "this is test04" << endl;
	return 8888;
}

// �������� ����һ������ �Ƚ������������ֵĴ�С�������ϴ��ֵ���з���

//��ǰ���߱����������Ĵ��ڣ��������ú���������
// ���˺�������֮�󣬺����Ķ������д��main����֮�󣬲�Ȼ����Щmain����ǰ��
// ��������������д��Σ��������Ķ���ֻ��дһ��
int max(int a, int b);

int main()
{
	//1.�޲��޷���������
	test01();

	//2.�в��޷���������
	int num = 100;
	test02(num);

	//3.�޲��з���������
	int num2 = test03();
	cout <<"num2=" << num2 << endl;

	//4.�в��з�����������
	int num3 = 5600;
	int num4 = test04(num3);
	cout << "num4= " << num4 << endl;

	//��������

	int a = 100;
	int b = 200;
	max(a, b);
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;  //��Ŀ�����
}
