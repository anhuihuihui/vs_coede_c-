//二维数组定义方式
#include<iostream>
using namespace std;
#include<string>
int main()
{
	//第一种定义类型 数组中的元素一个一个定义
	



	//第二种定义类型
	int arr[2][3] = { {1,2,3} ,{2,3,4} };  //数据组类型 数组名称[i][j] = { {值1，值2}.{。。。}} 

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}

	//第三种定义类型 //数据组类型 数组名称[i][j] = { 值1，值2.。。。。} 行和列都有
	int arr2[2][3] = { 1,2,3,4,5,6};
	cout << "第三种定义类型" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//第四种定义类型  //数据组类型 数组名称[][] = { 值1，值2.。。。。} 列必须填写，行可以不填
	int arr3[][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	//二维数组名的作用

	//1.可以查看所占内存空间的大小
	cout << "二维数组所占空间大小为：" << sizeof(arr3) << endl;

	cout << "查看二维数组的第一行所占内存空间为：" << sizeof(arr3[0]) << endl; 

	cout << "查看二维数组的第一行第一列的元素所占内存空间为：" << sizeof(arr3[0][0]) << endl;

	//计算二维数组元素行、列数

	cout << "二维数组行数大小为：" << sizeof(arr3)/ sizeof(arr3[0]) << endl;

	cout << "二维数组列数大小为：" << sizeof(arr3[0]) / sizeof(arr3[0][0]) << endl;

	//计算二维数组元素个数

	cout << "二维数组的元素个数为：" << sizeof(arr3) / sizeof(arr3[0][0]) << endl;

	//2.查看二维数组的首地址
	cout << "查看二维数组的首地址为：" << arr3 << endl;  //十六进制

	//cout << "查看二维数组的首地址为：" << (int)arr3<< endl; //十进制

	cout << "查看二维数组的首地址为：" << (long long)arr3<< endl; //十进制

	cout << "查看二维数组的第一行的首地址为：" << (long long)&arr3[0] << endl; //十进制

	cout << "查看二维数组的第一行第一列元素的首地址为：" << &arr3[0][0] << endl; //十六进制

	cout << "查看二维数组的第一行第一列元素的首地址为：" << (long long)&arr3[0][0] << endl; //十进制

	cout << "查看二维数组的第一行第二列元素的首地址为：" << (long long)&arr3[0][1] << endl; //十进制

	cout << "查看二维数组的第二行第一列元素的首地址为：" << (long long)&arr3[1][0] << endl; //十进制
	

	//二维数组的案例

	//创建二维数组
	int arr4[3][3] = { 100,100,100,90,50,100,60,70,80 };
	string name[] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			//cout << arr4[i][j] << " ";
			sum += arr4[i][j];
		}
		//cout << endl;
		cout <<  name[i]<< "的总成绩为：" << sum << endl;
	}
	system("pause");
	return 0;


}