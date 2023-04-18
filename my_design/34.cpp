//34new操作符
#include<iostream>
using namespace std;

//1.new的基本语法
int* func()
{
	//在堆区创建整形数据
	//new 返回的是 该数据类型的指针
	int* p = new int(10);
	return p;
}
void test()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;  //delete之后 已经释放内存 不能再进行访问 即非法操作会报错
}
//2。在堆区利用new开辟数组
void test02()
{
	//创建10整型数组 在堆区
	int * arr = new int[10];   //10代表数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[] arr;
}
int main()
{
	test();
	test02();

	system("pause");
	return 0;
}