#include<iostream>
using namespace std;


//设计一个圆类 求圆的周长
//求周长的公式：2*PI*半径
const double PI = 3.14;
//class代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:
	//属性  通常就是一些变量
	int m_r;
	//行为  通常就是一些函数
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类 创建具体的圆（对象）
	//实例化（通过一个类 创建一个对象的过程）
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长为; " << c1.calculateZC() << endl;



	system("pause");
	return 0;
}