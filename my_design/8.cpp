// forѭ��
#include<iostream>
using namespace std;
int main()
{
	//forѭ��
	//������0��ӡ��9

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	for (int j = 0; j <= 100; j++)
	{
		if (j % 10 == 7 || j / 10 == 7 || j % 7 == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << j << endl;
		}
	}
	//Ƕ��ѭ��
	for (int m = 0; m < 10; m++)
	{
		for (int n = 0; n < 10; n++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	
	//�˷��ھ���
	for (int h = 1; h < 10; h++)
	{
		for (int L = 1; L <= h; L++)
		{
			cout << h << "*" << L << "=" << h * L;
			cout << "  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}