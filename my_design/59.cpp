//59��ָ����ʳ�Ա����
#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//�����ԭ������Ϊ�����ָ��ΪNULL
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