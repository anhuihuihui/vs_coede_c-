//const
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;

	//const ����ָ��   ����ָ��
	const int* p = &a;   
	//ָ��ָ������޸�   ������ const int* p = &b;
	//��ָ��ָ���ֵ���ܸ� �������� *p = 20;
	
	//const ���γ���   ָ�볣��
	 int* const p2 = &a;

	//ָ��ָ�򲻿����޸�   ��������  int* const p2 = &b;
	//��ָ��ָ���ֵ���Ը� ������ *p2 = 20;
	
	
	//const ���γ���Ҳ����ָ��   
	const int* const p3 = &a;

	//ָ��ָ�򲻿����޸�   �������� const int* const p3 = &b;
	//��ָ��ָ���ֵҲ�����Ը� �������� *p3 = 20;



	system("pause");
	return 0;


}