//冒泡排序
#include<iostream>
using namespace std;
int main()
{
	//利用冒泡排序实现升序序列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "升序前的数组：" ;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	//总共排序轮数为 元素个数-1
	for (int l = 0; l < sizeof(arr) / sizeof(arr[0]) - 1; l++)
	{
		//内层循环对比 次数 = 元素个数 - 当前轮数 - 1
		for (int c = 0; c < sizeof(arr) / sizeof(arr[0]) - l - 1; c++)
		{
			//如果第一个数字比第二个数字大，交换两个数字
			if (arr[c] > arr[c + 1])
			{
				int temp = arr[c];
				arr[c] = arr[c + 1];
				arr[c + 1] = temp;
			}
		}
	}
	//排序后的结果
	cout << "排序后的结果：" ;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}