// 指针所占内存空间
#include<iostream>
using namespace std;
int main()
{
	//指针所占内存空间
	int a = 10;
	//创建指针
	//int* p;
	//p = &a;

	//上面两句合并成一句
	int* p = &a;

	cout << "指针p所占内存空间为：sizeof(int *)= " << sizeof(p) << endl; //整形指针

	cout << "指针所占内存空间为：sizeof(char *)= " << sizeof(char*) << endl; //字符型指针

	cout << "指针所占内存空间为：sizeof(char *)= " << sizeof(float*) << endl; //浮点型指针

	cout << "指针所占内存空间为：sizeof(double *)= " << sizeof(double*) << endl; //双精度浮点型型指针
	//32即x86位操作系统下，指针所镇内存空间为4个字节 ，不论是什么数据类型
	//64即x64位操作系统下，指针所镇内存空间为8个字节 ，不论是什么数据类型


	system("pause");
	return 0;


}