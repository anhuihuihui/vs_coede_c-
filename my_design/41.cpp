//41��������ע������
#include<iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�����
void fun(int& a) //int &a =10;���Ϸ�
{
	cout << "fun(int &a )�ĵ���" << endl;
}
void fun(const int& a)
{
	cout << "fun(const int &a )�ĵ���" << endl;
}

//2.������������Ĭ�ϲ���
void fun2(int a,int b =10)
{
	cout << "fun(int a,int b =10)�ĵ���" << endl;
}
void fun2(int a)
{
	cout << "fun(int a)�ĵ���" << endl;
}

int main()
{
	int a = 10;
	fun(a);	    //fun(int &a )�ĵ���
	fun(10);	//fun(const int &a )�ĵ���

	//fun2(10); //��������������Ĭ�ϲ��������ֶ����ԣ��������������������
	fun2(10,20); //������û��� ��Ϊ����Ĳ����Ḳ��Ĭ�ϲ���
	system("pause");
	return 0;
}