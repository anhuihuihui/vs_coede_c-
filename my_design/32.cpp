//全局区
#include<iostream>
using namespace std;

//全局常量
int b = 20;
char str1[] = "hello";
//const 修饰的全局变量，叫做全局常量
const int c_g_a = 10;

int main()
{
	//全局变量 与 局部变量
	int a = 10;
	cout << "局部变量a的地址为： " << (long long)&a << endl;
	cout << "全局变量b的地址为： " << (long long)&b << endl;

	//静态变量  在普通变量前加static 属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为： " << (long long)&s_a << endl;
	cout << "静态变量s_b的地址为： " << (long long)&s_b << endl;   //静态变量与全局变量的地址很接近

	//常量 
	//局部字符串常量   全局字符串常量
	char str[] = "helloword";
	cout << "局部字符串常量的地址为： " << (long long)&str << endl;
	cout << "全局字符串常量的地址为： " << (long long)&str1 << endl;

	//const修饰的常量
	//const修饰的全局变量 
	cout << "全局常量c_g_a的地址为; " << (long long)&c_g_a<< endl;
	//const修饰的局部变量
	const int c_l_a = 10;
	cout << "局部常量c_l_a的地址为; " <<(long long)&c_l_a<< endl;
	system("pause");
	return 0;
}