//�ṹ��ָ��
#include<iostream>
using namespace std;

struct Student  //�ṹ�崴��ʱ����ʱ struct �ؼ��ֲ���ʡ��
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
struct teacher  //�ṹ�崴��ʱ����ʱ struct �ؼ��ֲ���ʡ��
{
	//��Ա�б�
	//����
	string name;
	//��ʦ ְ�����
	int id;
	//����
	int age;
	//Ƕ�׽ṹ��
	struct Student stu; //ѧ���ṹ��
};

int main()
{
	//1.����ѧ���ṹ�����
	struct Student s = { "����",20,100 };
	//2.ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;
	//3.ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ�ṹ�����
	struct teacher t1;

	// ������ʦ�ṹ���е�����
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;
	// ������ʦ�ṹ���� Ƕ�׵�ѧ���ṹ�� ������
	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;

	cout << "ѧ�� ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;
	
	system("pause");
	return 0;
}