// whileѭ�����
# include <iostream>
using namespace std;
# include <ctime>
int main()
{
	int num = 0;
	while (num < 10)  //while() ������ѭ������
	{
		cout << "numΪ��" << num << endl;
		num++;
	}
	int num2 = rand() % 100 + 1; //�������һ��1��100����  rand() % 100 �������һ��0-99����
//	cout << num << endl;

	//������������ �������õ�ǰϵͳʱ���������������ֹÿ�����ɵ��������һ��
	srand((unsigned int)time(NULL));

	int val = 0;
	while (1)  //while (val != num2)
	{
		cin >> val;
		cout << "��µ�����Ϊ��" << val<< endl;
		if (val > num2)
		{
			cout << "��´���" << endl;
		}
		else if (val < num2)
		{
			cout << "��µ�����С��" << endl;
		}
		else
		{
			cout << "'���¶���" << endl;
			break;
		}
	}
	
	

	system("pause");
	return 0;
}