//40����ռλ����
#include<iostream>
using namespace std;

// ռλ����
// ����ֵ���� ������(��������){}
// Ŀǰ�׶ε�ռλ���� ���ǻ��ò���������γ��л��õ�
// ռλ���� ��������Ĭ�ϲ���
void func(int a,int = 10 )
{
	cout << "this is func  " << endl;

}


//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1.ͬһ��������
//2.����������ͬ
//3.�����Ĳ������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func2()
{
	cout << "func2 �ĵ���" << endl;
}
//������ͬ
void func2(int a)
{
	cout << "func2(int a) �ĵ���" << endl;
}
//���Ͳ�ͬ
void func2(double a)
{
	cout << "func2(double a) �ĵ���" << endl;
}
//˳��ͬ
void func2(int a,double b)
{
	cout << "func2(int a,double b) �ĵ���" << endl;
}
void func2(double b,int a)
{
	cout << "func2(double b,int a) �ĵ���" << endl;
}
//ע������
//�����ķ���ֵ������Ϊ�������ص�����
int main()
{
	func(10); // func(10, 10); �ڶ���10-���ô���

	func2();
	func2(10);
	func2(3.14);
	func2(3.14, 10);
	system("pause");
	return 0;
}