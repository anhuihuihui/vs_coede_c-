//const�ṹ��ʹ��
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
}; 
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent1(const struct student *a)
{
	// a->age = 150; ���� const һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������ 
	cout << "�Ӻ���1��ӡ" << "������" << a->name << " ���䣺" << a->age << " ������" << a->score << endl;
}
int main()
{
	//�����ṹ�����
	struct student s = {"����",15,70};

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudent1(&s);
	cout << "main������������Ϊ��" << s.age <<endl;

	system("pause");
	return 0;
}