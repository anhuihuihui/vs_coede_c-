//36��������������
#include<iostream>
using namespace std;

//��������

//1.ֵ����
void mySwap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.��ַ����
void mySwap02(int* a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.���ô���
void mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b); //ֵ���� �ββ���ı�ʵ��
	 
	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;

	mySwap02(&a, &b); //��ַ���� �βλ�ı�ʵ��  a��b����н���

	cout << "swap02 a= " << a << endl;
	cout << "swap02 b= " << b << endl;

	mySwap03(a, b);//���ô��� �βλ�ı�ʵ��  a��b�������һ�εĽ���

	cout << "swap03 a= " << a << endl;
	cout << "swap03 b= " << b << endl;

	system("pause");
	return 0;
}