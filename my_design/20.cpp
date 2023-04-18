//空指针
#include<iostream>
using namespace std;
int main()
{
	//空指针
	//1.空指针用于给指针变量进行初始化   地址为0
	
	int* p = NULL; 
	cout << "p= " << p << endl;
	//2.空指针是不可以进行访问的
	//会报错 0-255之间的内存编号是系统占用的，因此不可以访问  即不能进行解引用(*p)操作
	//*p = 100; 
	//cout << *p << endl;
	system("pause");
	return 0;


}