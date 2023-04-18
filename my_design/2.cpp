//常量
# include <iostream>
using namespace std;

//常量的定义方式
// define 定义宏常量
// const  修饰的变量 

//define  宏常量
# define Day 7

int main()
{
	//Day = 14; //define 修饰的宏常量，一般写在函数体外部，一旦修改就会报错
	cout << "一周总共" << Day << "天" << endl;

	const int month = 12;
	//month = 24; //const 修饰的变量也表示常量，一般写在函数体内部，一旦修改就会报错
	cout << "一年总共" << month << "月" << endl;
	system("pause");
	return 0;
}

