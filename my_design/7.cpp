//do-while语句
#include<iostream>
using namespace std;
int main()
{
	//do while 语句
	//在屏幕中输出0到9这10个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);

	//do...while 与while语句的区别在于do...while会先执行一次循环语句，再判断条件


	//水仙花数
	
	//先打印所有的三位数字 100-999
	int num2 = 100;
	do
	{
		//获取个位  三位数%10  对数字直接进行取模于10获得个位
		int a = num2 % 10;
		//获取十位  三位数/10%10  对数字整除 得到两位数 再取模于10获取十位
		int b = num2 / 10 % 10;
		//获取百位  三位数/100  直接整除100 获取百位
		int c = num2 / 100;

		if (a*a*a+ b * b * b+ c * c* c ==num2)
		{
			cout << num2 << "为水仙花数" << endl;
		}
//		cout << num2 << endl;
		num2++;

	} while (num2 < 1000);
	

	system("pause");
	return 0;

}