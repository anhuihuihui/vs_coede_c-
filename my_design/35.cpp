//35���õĻ����﷨
#include<iostream>
using namespace std;

int main()
{
	//���õĻ����﷨
	//�������� &���� = ԭ��
	int a = 10;

	//��������
	int& b = a;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	b = 20;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	//1.���ñ����ʼ��
	// int &b;  //���Ǵ�ģ������ʼ�� ��ָ��ֵ 	int& b = a;
	//2.�����ڳ�ʼ���󣬲����Ըı�
	int c = 20;
	b = c; //��ֵ�����������Ǹ�������

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}