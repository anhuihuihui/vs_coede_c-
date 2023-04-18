//结构体做函数参数
#include<iostream>
using namespace std;

struct student  //结构体创建时定义时 struct 关键字不能省略
{
	//成员列表
	// 
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};  //顺便创建一个结构体变量

//打印学生信息函数
//1.值传递
void printStudent1(struct student a)
{
	a.age = 100;
	cout << "子函数1打印" << "姓名：" << a.name << " 年龄：" << a.age << " 分数：" << a.score << endl;
}
//2.值传递
void printStudent2(struct student* p)
{
	p->age = 200;
	p->score = 200;
	cout << "子函数2打印" << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 100;
	cout <<"main函数打印"<< "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

	//printStudent1(s);
	printStudent2(&s);

	cout << "main函数打印2" << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

	system("pause");
	return 0;
}