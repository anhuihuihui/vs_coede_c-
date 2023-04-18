// for循环
#include<iostream>
using namespace std;
int main()
{
	//for循环
	//从数字0打印到9

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	for (int j = 0; j <= 100; j++)
	{
		if (j % 10 == 7 || j / 10 == 7 || j % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << j << endl;
		}
	}
	//嵌套循环
	for (int m = 0; m < 10; m++)
	{
		for (int n = 0; n < 10; n++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	
	//乘法口诀表
	for (int h = 1; h < 10; h++)
	{
		for (int L = 1; L <= h; L++)
		{
			cout << h << "*" << L << "=" << h * L;
			cout << "  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}