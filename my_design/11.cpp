//一维数组案例
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 300,350,200,400,250 };
	// 寻找数组中的最大值
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
	cout <<"数组中的最大值"<< max << endl;


	//元素逆置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;
	for (int j = 0; j < 5; j++) 
	{
		cout <<"原始数组为：" << arr[j] << endl;
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
		cout << "转置数组为：" << arr[n] << endl;
	}
	system("pause");
	return 0;


}