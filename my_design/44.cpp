//44��װ��Ȩ�޿���
#include<iostream>
using namespace std;
#include<string>

//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���    //protectde �� private �Ĺؼ�������Ҫ�ڼ̳�������  ���ӿ��Է��ʸ���protected����  ���ܷ���private�е�����

class Person
{
public:
	string name;
protected:
	string car;
private:
	int Password;
public:
	void func()
	{
		car = "������";    //����Ȩ�����ݣ������ڷ��ʲ���
		Password = 123456; //˽��Ȩ�����ݣ������ڷ��ʲ���
	}
};

class C1
{
	int m_A; //Ĭ��Ȩ�� ��˽��-

};
struct C2
{
	int m_A; //Ĭ��Ȩ�� �ǹ���
};

int main()
{
	Person p1;
	p1.name = "����";
	//p1.car = "����";  //����Ȩ�����ݣ���������ʲ���
	//p1.Password = 123; //˽��Ȩ�����ݣ���������ʲ���


	//struct��class������
	//��C++�� struct��classΨһ����������� Ĭ�ϵķ���Ȩ�޲�ͬ
	//struct Ĭ��Ȩ��Ϊ���� public
	//class Ĭ��Ȩ��Ϊ˽�� private

	C1 c1;
	//c1.m_A = 6;

	C2 c2;
	c2.m_A = 10;

	system("pause");
	return 0;
}