//34new������
#include<iostream>
using namespace std;

//1.new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new ���ص��� ���������͵�ָ��
	int* p = new int(10);
	return p;
}
void test()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;  //delete֮�� �Ѿ��ͷ��ڴ� �����ٽ��з��� ���Ƿ������ᱨ��
}
//2���ڶ�������new��������
void test02()
{
	//����10�������� �ڶ���
	int * arr = new int[10];   //10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	delete[] arr;
}
int main()
{
	test();
	test02();

	system("pause");
	return 0;
}