//54初始化列表
#include<iostream>
using namespace std;

class Person {
public:
	//传统方式初始化
	/*Person(int a, int b, int c) 
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//初始化列表方式 初始化
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c) {}

	int m_A;
	int m_B;
	int m_C;
};
void test54a()
{
	Person p(10, 20, 30);
	
	cout << "mA:" << p.m_A << endl;
	cout << "mB:" << p.m_B << endl;
	cout << "mC:" << p.m_C << endl;
}
int main()
{
	test54a();

	system("pause");
	return 0;
}