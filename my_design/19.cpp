// ָ����ռ�ڴ�ռ�
#include<iostream>
using namespace std;
int main()
{
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	//����ָ��
	//int* p;
	//p = &a;

	//��������ϲ���һ��
	int* p = &a;

	cout << "ָ��p��ռ�ڴ�ռ�Ϊ��sizeof(int *)= " << sizeof(p) << endl; //����ָ��

	cout << "ָ����ռ�ڴ�ռ�Ϊ��sizeof(char *)= " << sizeof(char*) << endl; //�ַ���ָ��

	cout << "ָ����ռ�ڴ�ռ�Ϊ��sizeof(char *)= " << sizeof(float*) << endl; //������ָ��

	cout << "ָ����ռ�ڴ�ռ�Ϊ��sizeof(double *)= " << sizeof(double*) << endl; //˫���ȸ�������ָ��
	//32��x86λ����ϵͳ�£�ָ�������ڴ�ռ�Ϊ4���ֽ� ��������ʲô��������
	//64��x64λ����ϵͳ�£�ָ�������ڴ�ռ�Ϊ8���ֽ� ��������ʲô��������


	system("pause");
	return 0;


}