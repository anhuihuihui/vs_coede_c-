// ֵ����
#include<iostream>
using namespace std;


//ֵ����
//���庯�� ʵ���������ֽ��н���

//�����������Ҫ����ֵ��������ʱ�����дvoid

void swap(int num1,int num2)
{	

	cout << "����ǰ��" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;

    //�����ֽ��н���
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;

	return;  //����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
}
int main()
{
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	swap(a, b);
	// �������βη����ı䣬������Ӱ�캯����ʵ��
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}