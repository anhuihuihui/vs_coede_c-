//60const���γ�Ա����
#include<iostream>
using namespace std;

//������
class person
{
public:
	//������
	person()
	{}
	//this ָ��ı����� ָ�볣�� ��ָ���ָ���ǲ����޸ĵ�
	// person * const this
	// �����ָ��ָ���ֵҲ�����޸� �ټ� һ��const���� const person * const this
	//�ڳ�Ա�������const�����ε���thisָ����ָ��ָ���ֵ�����޸�
	void showPerson()const 
	{
		//this->m_a = 100;//��const�� ����const �����γ���������ָ��
		//this = NULL; //thisָ�� �������޸�ָ���ָ��  �������޸�ָ��ָ���ֵ������const��  

		this->m_b = 100;
	}
	void func()
	{
		this->m_a = 100; // �����޸�ָ��ָ���ֵ������const��
	}
	int m_a;
	mutable int m_b;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ, ǰ�����mutable
};
void test60a()
{
	 person p;
	p.showPerson();

}
void test60b()
{
	const person p1; // �ڶ���ǰ����const ��Ϊ������
	//p1.m_a = 100; //�����������޸Ļ���ͨ�ĳ�Ա����
	p1.m_b = 100; // m_b������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p1.showPerson(); 
	//p1.func(); //�������ܵ�����ͨ��Ա���� ����Ϊ��ͨ��Ա���������޸ĳ�Ա���� 
}
int main()
{
	test60a();
	test60b();

	system("pause");
	return 0;
}