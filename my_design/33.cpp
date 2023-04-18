//33栈区堆区
#include<iostream>
using namespace std;

//栈区数据注意事项--不要反悔局部变量的地址
// 栈区的数据由编译器管理开辟和释放

int* func(int b)  //形参数据也会放在栈区
{
	//int a = 10;  //局部变量   存放在栈区，栈区的数据在函数执行完后会自动释放
	//return &a;//返回局部变量的地址

	int *p = new int(10);
	return p;
}


int main()
{
	int* p = func(100);
	cout << *p << endl;  //第一次打印数字正确，因为编译器做了保留
	cout << *p << endl; //第二次这个数据就不再保留了 



	//在堆区开辟数据

	system("pause");
	return 0;
} 