//�ṹ��
#include<iostream>
using namespace std;

//1������ѧ���������ͣ�ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������

struct Student  //�ṹ�崴��ʱ����ʱ struct �ؼ��ֲ���ʡ��
{
	//��Ա�б�

	//����
	string name;

	//����
	int age;

	//����
	int score;


}s3;  //˳�㴴��һ���ṹ�����

//ͨ��ѧ�����ʹ�������ѧ��


int main()
{
	//2.1 struct Student S1
	struct Student s1;  //�ṹ���������ʱ struct �ؼ��ֿ���ʡ��
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	//2.2 sturct Student S2 = {...}
	struct Student s2 = { "����",20,100 };

	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
	//2.3 �ڶ���ṹʱ˳�㴴���ṹ�����
	 //�������õıȽ���  ǰ�����õıȽ϶�
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;




	//�ṹ������
	// 1.����һ���ṹ��

	//main�����ⶨ���Student�ṹ��

	// 2.����һ���ṹ������
	//struct �ṹ���� ������[Ԫ�ظ���] = { {} , {} , ... {} }
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",19,60 },
		{"����",20,70 }

	};
	// 3.���ṹ�������е�Ԫ�ظ�ֵ

	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	
	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name 
			<< " ���䣺" << stuArray[i].age 
			<< " ������" << stuArray[i].score << endl;
		/*cout << stuArray->age << stuArray->name << stuArray->score << endl;
		stuArray++;*/
	}
	
	system("pause");
	return 0;
}