//引用做函数返回值
#include<iostream>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;  //局部变量存放在四个区中的 栈区
	return a;
}
//函数调用可以作为左值
int& test02()
{
	static int a = 10; //静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}
int main()
{
	//int& ref = test01();
	//cout << "ref= " << ref << endl;     //第一次结果正确，因为编译器做了保留
	//cout << "ref= " << ref << endl;     //第二次结果错误，因为a的内存已经释放 但是在64位系统中 仍然没有被释放

	int& ref2 = test02();
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	//如果函数的返回值是引用，这个函数调用可以作为左值
	test02() = 1000;  //相当于a做了一个操作 a=1000 而 ref2本身就是a的另一个别名，即引用
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;

	system("pause");
	return 0;
}