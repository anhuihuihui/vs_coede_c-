#include<iostream>
using namespace std;
int main()
{
	//ָ�������
	//����ָ����������е�Ԫ��
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	cout << "����ĵ�һ��Ԫ��Ϊ�� " << arr[0] << endl;

	int* p = arr;//arr����������׵�ַ

	cout << "����ָ����ʵ�һ��Ԫ�أ� " << *p << endl;


	for (int i = 0; i < 10; i++)
	{
		cout<<"����ָ����ʵ�"<<i<<"��Ԫ�أ�" << *p << endl;
		p++;
	}
	
	system("pause");
	return 0;
}