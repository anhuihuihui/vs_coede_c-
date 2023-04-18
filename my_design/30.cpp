//结构案例1
#include<iostream>
using namespace std;
#include<cTime>
#include<string>
//学生结构体
struct student
{
	string sname;
	int score;
};

//老师结构体
struct teacher
{
	string name;
	struct student sArray[5];
};

//给学生和老师赋值的函数
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSpeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "老师_";
		tArray[i].name += nameSpeed[i];
		cout << tArray[i].name << endl;
		//通过循环给每名老师做带的1学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sname= "学生_";
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
		cout << "老师姓名: " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生姓名: " << tArray[i].sArray[j].sname << " 学生分数; " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建3名老师的数组
	struct teacher tArray[3];
	struct student sArray[5];

	//2.通过函数给3名老师的信息赋值 并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.打印所有老师及所带学生的信息
	printInfo(tArray,len);

	system("pause");
	return 0;
}