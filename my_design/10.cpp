//����
#include<iostream>
using namespace std;
int main()
{
	//���鶨��

	//1.�������� ��������[���鳤��]
	int arr1[5];

	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;

	cout << arr1[1] << endl;
	//2.�������� ��������[] = {ֵ1��ֵ2.������}
	int arr[5] = { 10,20,30 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;  //��ʼ��ʱ�����û����ȫ��д�������0����������ʣ�������
	}

	//3. �������� ������[] = {ֵ1��ֵ2.������}
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int j = 0; j < 9; j++)
	{
		cout << arr2[j] << endl;
	}

	//����������;
	//ͨ��������ͳ������������ռ�ڴ��С
	cout << "arr2������ڴ��СΪ��" << sizeof(arr2)<< endl;

	cout << "arr2[0]��ռ�ڴ��СΪ��" << sizeof(arr2[0]) << endl;

	cout << "һά�����Ԫ�ظ���Ϊ��" << sizeof(arr2) / sizeof(arr2[0]) << endl;

	//����ͨ���������鿴������׵�ַ
	cout << "arr2������׵�ַΪ: " << arr2 << endl; //һ��Ϊ16����
	cout << "arr2������׵�ַΪ: " << (long long)arr2 << endl;  //ת��Ϊ10����
	cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << &arr2[0] << endl;
	cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << (long long)&arr2[0] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (long long)&arr2[1] << endl;



	system("pause");
	return 0;



}