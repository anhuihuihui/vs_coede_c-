//ָ������ͺ���
#include<iostream>
using namespace std;
#include "swap.h"
void swap(int* p1, int* p2);

int main()
{
	int a = 10;
	int b = 20;
	//ָ��ͺ���
	//1.ֵ����
	swap2(a, b);
	cout <<"ֵ����" << "a= " << a << endl;
	cout <<"ֵ����" << "b= " << b << endl;

	//2.��ַ����
	//����ǵ�ַ���ݣ������޸�ʵ��
	swap(&a, &b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}
void swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
