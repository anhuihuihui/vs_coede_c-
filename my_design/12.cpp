//ð������
#include<iostream>
using namespace std;
int main()
{
	//����ð������ʵ����������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ�����飺" ;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//��ʼð������
	//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int l = 0; l < sizeof(arr) / sizeof(arr[0]) - 1; l++)
	{
		//�ڲ�ѭ���Ա� ���� = Ԫ�ظ��� - ��ǰ���� - 1
		for (int c = 0; c < sizeof(arr) / sizeof(arr[0]) - l - 1; c++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[c] > arr[c + 1])
			{
				int temp = arr[c];
				arr[c] = arr[c + 1];
				arr[c + 1] = temp;
			}
		}
	}
	//�����Ľ��
	cout << "�����Ľ����" ;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}