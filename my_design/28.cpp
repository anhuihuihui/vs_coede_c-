//�ṹ������������
#include<iostream>
using namespace std;

struct student  //�ṹ�崴��ʱ����ʱ struct �ؼ��ֲ���ʡ��
{
	//��Ա�б�
	// 
	//����
	string name;
	//����
	int age;
	//����
	int score;
};  //˳�㴴��һ���ṹ�����

//��ӡѧ����Ϣ����
//1.ֵ����
void printStudent1(struct student a)
{
	a.age = 100;
	cout << "�Ӻ���1��ӡ" << "������" << a.name << " ���䣺" << a.age << " ������" << a.score << endl;
}
//2.ֵ����
void printStudent2(struct student* p)
{
	p->age = 200;
	p->score = 200;
	cout << "�Ӻ���2��ӡ" << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}
int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ��������

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 100;
	cout <<"main������ӡ"<< "������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;

	//printStudent1(s);
	printStudent2(&s);

	cout << "main������ӡ2" << "������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;

	system("pause");
	return 0;
}