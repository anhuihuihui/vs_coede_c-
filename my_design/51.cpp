//51�������캯������ʱ��
#include<iostream>
using namespace std;

class person
{
public:
	int age;
	//�޲ι��캯�� Ҳ�� Ĭ�Ϲ��캯��
	person()
	{
		cout << "�����޲ι��캯��" << endl;
	}
	//�вι��캯�� �����������أ�
	person(int a)
	{
		age = a;
		cout << "�����вι��캯��" << endl;
	}
	//��������
	person(const person& p)
	{
		age = p.age;
		cout << "���ÿ������캯��" << endl;
	}
	~person()
	{
		cout << "������������" << endl;
	}
};

//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(person p1)
{

}
void test51b()
{
	person p;
	dowork(p);
}
 //3. ֵ��ʽ���ؾֲ�����
person dowork2()
{
	person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test51c()
{
	person p2 = dowork2();
	cout << (int*)&p2 << endl;
}
//���캯���ĵ���
void test51a()
{
	person p1; 
	person p2(10); 
	person p3(p2);
	              
	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;
}
int main()
{
	//test51a();
	//test51b();
	test51c();
	//person p;

	system("pause");
	return 0;
}
