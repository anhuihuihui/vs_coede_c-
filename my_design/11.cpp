//һά���鰸��
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 300,350,200,400,250 };
	// Ѱ�������е����ֵ
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		//else
		//{
		//	continue;
		//}
	}
	cout <<"�����е����ֵ"<< max << endl;


	//Ԫ������
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;
	for (int j = 0; j < 5; j++) 
	{
		cout <<"ԭʼ����Ϊ��" << arr[j] << endl;
	}
	cout << end << endl;
	int temp;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int n = 0; n< 5; n++)
	{
		cout << "ת������Ϊ��" << arr[n] << endl;
	}
	system("pause");
	return 0;


}