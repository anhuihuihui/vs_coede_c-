//const
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;

	//const 修饰指针   常量指针
	const int* p = &a;   
	//指针指向可以修改   即可以 const int* p = &b;
	//但指针指向的值不能改 即不可以 *p = 20;
	
	//const 修饰常量   指针常量
	 int* const p2 = &a;

	//指针指向不可以修改   即不可以  int* const p2 = &b;
	//但指针指向的值可以改 即可以 *p2 = 20;
	
	
	//const 修饰常量也修饰指针   
	const int* const p3 = &a;

	//指针指向不可以修改   即不可以 const int* const p3 = &b;
	//但指针指向的值也不可以改 即不可以 *p3 = 20;



	system("pause");
	return 0;


}