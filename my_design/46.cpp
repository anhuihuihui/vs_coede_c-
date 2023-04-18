//46立方体类
#include<iostream>
using namespace std;

//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用 全局函数 和 成员函数 判断两个立方体是否相等。
class Cube
{
private:
	//属性
	int m_l;
	int m_w;
	int m_h;
public:
	//行为
	void setM_l(int l)
	{
		m_l = l;
	}
	int getM_l()
	{
		return m_l;
	}
	void setM_w(int w)
	{
		m_w = w;
	}
	int getM_w()
	{
		return m_w;
	}
	void setM_h(int h)
	{
		m_h = h;
	}
	int getM_h()
	{
		return m_h;
	}
	//获取立方体的面积
	int calculateS()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_h * m_w;
	}
	//获取立方体体积
	int calculatev()
	{
		return   m_h * m_l * m_w;
	}
	//利用成员函数判断理立方体是否相等
	bool isSameByClass(Cube& c)
	{
		if (m_h == c.getM_h() && m_l == c.getM_l() && m_w == c.getM_w())
		{
			return true;
		}
		return false;
	}
};
//利用全局函数来判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getM_h() == c2.getM_h()&&c1.getM_l() == c2.getM_l() && c1.getM_w() == c2.getM_w())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.setM_h(10);
	c1.setM_l(10);
	c1.setM_w(10);
	cout << "c1的面积为： " << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculatev() << endl;

	Cube c2;
	c2.setM_h(10);
	c2.setM_l(20);
	c2.setM_w(10);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1与c2是相等的" << endl;
	}
	else
	{
		cout << "c1与c2是不相等的" << endl;
	}

	bool ret2 = c1.isSameByClass(c2);
	if (ret2)
	{
		cout << "c1与c2是相等的" << endl;
	}
	else
	{
		cout << "c1与c2是不相等的" << endl;
	}
	system("pause");
	return 0;
}