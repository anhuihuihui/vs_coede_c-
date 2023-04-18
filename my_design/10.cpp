//数组
#include<iostream>
using namespace std;
int main()
{
	//数组定义

	//1.数据类型 数组名称[数组长度]
	int arr1[5];

	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;

	cout << arr1[1] << endl;
	//2.数据类型 数组名称[] = {值1，值2.。。。}
	int arr[5] = { 10,20,30 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;  //初始化时，如果没有完全填写，则会用0来补充数组剩余的数据
	}

	//3. 数据类型 数组名[] = {值1，值2.。。。}
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int j = 0; j < 9; j++)
	{
		cout << arr2[j] << endl;
	}

	//数组名的用途
	//通过数组名统计整个数组所占内存大小
	cout << "arr2数组的内存大小为：" << sizeof(arr2)<< endl;

	cout << "arr2[0]所占内存大小为：" << sizeof(arr2[0]) << endl;

	cout << "一维数组的元素个数为：" << sizeof(arr2) / sizeof(arr2[0]) << endl;

	//可以通过数组名查看数组的首地址
	cout << "arr2数组的首地址为: " << arr2 << endl; //一般为16进制
	cout << "arr2数组的首地址为: " << (long long)arr2 << endl;  //转换为10进制
	cout << "数组中第一个元素的地址为：" << &arr2[0] << endl;
	cout << "数组中第一个元素的地址为：" << (long long)&arr2[0] << endl;
	cout << "数组中第二个元素的地址为：" << (long long)&arr2[1] << endl;



	system("pause");
	return 0;



}