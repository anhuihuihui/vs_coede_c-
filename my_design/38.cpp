//38常量引用
#include<iostream>
using namespace std;

void showValue(const int &val)
{
	//val = 10000; //加入const后，不能再修改形参
	cout << "val= " << val << endl;
}
int main()
{
	int a = 100;
	showValue(a);
	cout << "a= " << a << endl;


	system("pause");
	return 0;
}