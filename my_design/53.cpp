//53深拷贝与浅拷贝
#include<iostream>
using namespace std;

class person
{
public:
	int age;//年龄
	int* m_height;//身高
	//无参构造函数 也称 默认构造函数
	person()
	{
		cout << "调用默认无参构造函数" << endl;
	}
	//有参构造函数 （函数的重载）
	person(int a,int height)
	{
		age = a;
		m_height = new int(height);
		cout << "调用有参构造函数" << endl;
	}
	//拷贝构造
	person(const person& p)
	{
		age = p.age;
		cout << "aaa" << endl;
		cout << "调用拷贝构造函数" << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		//深拷贝
		m_height = new int(*p.m_height);
		cout << p.m_height <<endl;
	}
	~person()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (m_height != NULL)
		{
			delete m_height;
			//m_height = NULL;
		}
		cout << "调用析构函数" << endl;
	}
};
void test53a()
{
	person p(18,160);
	cout << "p的年龄为：" << p.age <<" p的身高为："<< *p.m_height << endl;
	cout << p.m_height << endl;
	person p1(p);
	cout << "p1的年龄为：" << p1.age << " p1的身高为：" << p1.m_height  << endl;
	cout << p1.m_height << endl;
}
int main()
{
	test53a();




	system("pause");
	return 0;
}