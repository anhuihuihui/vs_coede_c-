//��������������ֵ
#include<iostream>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;  //�ֲ�����������ĸ����е� ջ��
	return a;
}
//�������ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10; //��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}
int main()
{
	//int& ref = test01();
	//cout << "ref= " << ref << endl;     //��һ�ν����ȷ����Ϊ���������˱���
	//cout << "ref= " << ref << endl;     //�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ� ������64λϵͳ�� ��Ȼû�б��ͷ�

	int& ref2 = test02();
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	test02() = 1000;  //�൱��a����һ������ a=1000 �� ref2�������a����һ��������������
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;

	system("pause");
	return 0;
}