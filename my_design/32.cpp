//ȫ����
#include<iostream>
using namespace std;

//ȫ�ֳ���
int b = 20;
char str1[] = "hello";
//const ���ε�ȫ�ֱ���������ȫ�ֳ���
const int c_g_a = 10;

int main()
{
	//ȫ�ֱ��� �� �ֲ�����
	int a = 10;
	cout << "�ֲ�����a�ĵ�ַΪ�� " << (long long)&a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַΪ�� " << (long long)&b << endl;

	//��̬����  ����ͨ����ǰ��static ���ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ�� " << (long long)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ�� " << (long long)&s_b << endl;   //��̬������ȫ�ֱ����ĵ�ַ�ܽӽ�

	//���� 
	//�ֲ��ַ�������   ȫ���ַ�������
	char str[] = "helloword";
	cout << "�ֲ��ַ��������ĵ�ַΪ�� " << (long long)&str << endl;
	cout << "ȫ���ַ��������ĵ�ַΪ�� " << (long long)&str1 << endl;

	//const���εĳ���
	//const���ε�ȫ�ֱ��� 
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ; " << (long long)&c_g_a<< endl;
	//const���εľֲ�����
	const int c_l_a = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ; " <<(long long)&c_l_a<< endl;
	system("pause");
	return 0;
}