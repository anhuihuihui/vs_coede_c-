// ����
#include<iostream>
using namespace std;

int add(int num1,int num2)  //num1 num2 Ϊ�β�
{
	int sum;
	sum = num1 + num2;
	return sum;
}
int main()
{
	int a = 10;
	int b = 20;
	//main ������ ���� add����  ��������������
	int c = add(a, b);
	cout << c << endl;

	a = 100;
	b = 200;
	int d = add(a, b);
	cout << d << endl;



	system("pause");
	return 0;
}


