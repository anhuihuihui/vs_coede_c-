//break���
#include <iostream>
using namespace std;
int main()
{
	//break ��һ��ʹ�� switch���
	cout << "��ѡ���Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.һ��" << endl;
	cout << "3.����" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ��Ϊ��ͨģʽ" << endl;
		break;
	case 2:
		cout << "��ѡ���Ϊһ��ģʽ"<< endl;
		break;
	case 3:
		cout << "��ѡ���Ϊ����ģʽ"<<endl;
		break;
	default:
		break;
	}
	//break�ڶ������� for ѭ�����
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	//break�����ӳ�����Ƕ��ѭ����
	for (int h = 0; h < 10; h++)
	{
		for (int l = 0; l < 10; l++)
		{
			if (l == 6)
			{
				break;  //����break�˳��ڴ�ѭ������Ӱ�����ѭ��
			}
			cout << "* ";
		}
		cout << endl;
	}

	//continue���
	for (int i2 = 0; i2 < 100; i2++)
	{
		/*if (i2 % 2 != 0)
		{
			cout << i2 << endl;
		}
		else
		{
			continue;
		}*/
		if (i2 % 2 == 0)
		{
			continue; //����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			          //break���˳�ѭ�� continue����
		}
		cout << i2 << endl;
	}


	//goto���  ���ڱ��  ����ת�� ִ�б�ǵ�λ��   һ�㲻���� ����Ƚ���
	
	cout << "1.111" << endl;
	cout << "2.222" << endl;
	goto FLAG;
	cout << "3.333" << endl;
	cout << "4.444" << endl;
	FLAG:  //���
	cout << "5.555" << endl;

	system("pause");
	return 0;
}