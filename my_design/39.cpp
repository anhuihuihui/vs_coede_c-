//39������Ĭ�ϲ���
#include<iostream>
using namespace std;

//����Ĭ�ϲ���

//��������Լ��������ݣ������Լ������� �����û�У���ô����Ĭ��ֵ
//�﷨������ֵ���� ���������β� = Ĭ��ֵ��
int func(int a,int b = 20,int c= 30)
{
	return a + b + c;
}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 10, int c, int d)   //�ᱨ�� c dû��Ĭ���β�
//{
//	return a + b + c;
//}
//2.�����������������Ĭ�ϲ�������ô����ʵ�־Ͳ�����Ĭ�ϲ���
//int func2(int a =10, int b=10);
//int func2(int a=10,int b=10)   //������ʵ��ֻ����һ����Ĭ�ϲ���
//{
//	return a + b;
//}

int main()
{
	cout << func(10) << endl;  //60

	cout << func(10, 30) << endl;//70 b = 30�Ḳ�ǵ�ԭ��������Ĭ��ֵ b =20

	system("pause");
	return 0;
}