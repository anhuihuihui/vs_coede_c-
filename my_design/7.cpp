//do-while���
#include<iostream>
using namespace std;
int main()
{
	//do while ���
	//����Ļ�����0��9��10������
	int num = 0;
	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);

	//do...while ��while������������do...while����ִ��һ��ѭ����䣬���ж�����


	//ˮ�ɻ���
	
	//�ȴ�ӡ���е���λ���� 100-999
	int num2 = 100;
	do
	{
		//��ȡ��λ  ��λ��%10  ������ֱ�ӽ���ȡģ��10��ø�λ
		int a = num2 % 10;
		//��ȡʮλ  ��λ��/10%10  ���������� �õ���λ�� ��ȡģ��10��ȡʮλ
		int b = num2 / 10 % 10;
		//��ȡ��λ  ��λ��/100  ֱ������100 ��ȡ��λ
		int c = num2 / 100;

		if (a*a*a+ b * b * b+ c * c* c ==num2)
		{
			cout << num2 << "Ϊˮ�ɻ���" << endl;
		}
//		cout << num2 << endl;
		num2++;

	} while (num2 < 1000);
	

	system("pause");
	return 0;

}