//�ṹ����1
#include<iostream>
using namespace std;
#include<cTime>
#include<string>
//ѧ���ṹ��
struct student
{
	string sname;
	int score;
};

//��ʦ�ṹ��
struct teacher
{
	string name;
	struct student sArray[5];
};

//��ѧ������ʦ��ֵ�ĺ���
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSpeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "��ʦ_";
		tArray[i].name += nameSpeed[i];
		cout << tArray[i].name << endl;
		//ͨ��ѭ����ÿ����ʦ������1ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sname= "ѧ��_";
			cout << tArray[i].sArray[j].sname << endl;
			tArray[i].sArray[j].sname += nameSpeed[j];
			int random = rand() % 61 + 40;//40-100
			tArray[i].sArray[j].score = random;
		}
	}
}
void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����: " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ������: " << tArray[i].sArray[j].sname << " ѧ������; " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//1.����3����ʦ������
	struct teacher tArray[3];
	struct student sArray[5];

	//2.ͨ��������3����ʦ����Ϣ��ֵ ������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray,len);

	system("pause");
	return 0;
}