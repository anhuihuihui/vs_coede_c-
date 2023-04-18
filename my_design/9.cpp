//break语句
#include <iostream>
using namespace std;
int main()
{
	//break 第一种使用 switch语句
	cout << "请选择难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.一般" << endl;
	cout << "3.困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "您选择为普通模式" << endl;
		break;
	case 2:
		cout << "你选择的为一般模式"<< endl;
		break;
	case 3:
		cout << "您选择的为困难模式"<<endl;
		break;
	default:
		break;
	}
	//break第二种是用 for 循环语句
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	//break第三钟出现在嵌套循环中
	for (int h = 0; h < 10; h++)
	{
		for (int l = 0; l < 10; l++)
		{
			if (l == 6)
			{
				break;  //利用break退出内存循环，不影响外层循环
			}
			cout << "* ";
		}
		cout << endl;
	}

	//continue语句
	for (int i2 = 0; i2 < 100; i2++)
	{
		/*if (i2 % 2 != 0)
		{
			cout << i2 << endl;
		}
		else
		{
			continue;
		}*/
		if (i2 % 2 == 0)
		{
			continue; //可以筛选条件，执行到此就不再向下执行，执行下一次循环
			          //break会退出循环 continue不会
		}
		cout << i2 << endl;
	}


	//goto语句  存在标记  会跳转到 执行标记的位置   一般不常用 代码比较乱
	
	cout << "1.111" << endl;
	cout << "2.222" << endl;
	goto FLAG;
	cout << "3.333" << endl;
	cout << "4.444" << endl;
	FLAG:  //标记
	cout << "5.555" << endl;

	system("pause");
	return 0;
}