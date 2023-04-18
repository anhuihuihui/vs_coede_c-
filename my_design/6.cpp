// while循环语句
# include <iostream>
using namespace std;
# include <ctime>
int main()
{
	int num = 0;
	while (num < 10)  //while() 中填入循环条件
	{
		cout << "num为：" << num << endl;
		num++;
	}
	int num2 = rand() % 100 + 1; //随机生成一个1—100的数  rand() % 100 随机生成一个0-99的数
//	cout << num << endl;

	//添加随机数种子 作用利用当前系统时间生成随机数，防止每次生成的随机数都一样
	srand((unsigned int)time(NULL));

	int val = 0;
	while (1)  //while (val != num2)
	{
		cin >> val;
		cout << "你猜的数字为：" << val<< endl;
		if (val > num2)
		{
			cout << "你猜大了" << endl;
		}
		else if (val < num2)
		{
			cout << "你猜的数字小了" << endl;
		}
		else
		{
			cout << "'您猜对了" << endl;
			break;
		}
	}
	
	

	system("pause");
	return 0;
}