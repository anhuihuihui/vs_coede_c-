//58thisָ��
#include<iostream>
using namespace std;

class person
{
public:
	int age;
	person(int age)
	{
		//this ָ��ָ�� �����õĳ�Ա���� �����Ķ��� 
		this->age = age;
	}
	person &personAddage(person &p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}
};
// 1.������Ƴ�ͻ
void test58a()
{
	person p(18);
	cout << "p������Ϊ��" << p.age << endl;
}
//2.���ض�������*this
void test58b()
{
	person p1(10);
	person p2(10);
	p2.personAddage(p1);
	cout<< "p2������Ϊ��" << p2.age << endl;
	p2.personAddage(p1).personAddage(p1).personAddage(p1).personAddage(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main()
{

	test58a();
	test58b();


	system("pause");
	return 0;
}