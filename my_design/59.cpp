//59空指针访问成员函数
#include<iostream>
using namespace std;

//空指针调用成员函数
class person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//报错的原因是因为传入的指针为NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age= " << m_age << endl; //cout << "age= " << this->m_age << endl;
	}
	int m_age;
};
void test59a()
{
	person* p = NULL;
	
	p->showClassName();

	p->showPersonAge();
}
int main()
{
	test59a();

	system("pause");
	return 0;
}