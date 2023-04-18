//结构体指针
#include<iostream>
using namespace std;

struct Student  //结构体创建时定义时 struct 关键字不能省略
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
struct teacher  //结构体创建时定义时 struct 关键字不能省略
{
	//成员列表
	//姓名
	string name;
	//教师 职工编号
	int id;
	//年龄
	int age;
	//嵌套结构体
	struct Student stu; //学生结构体
};

int main()
{
	//1.创建学生结构体变量
	struct Student s = { "李四",20,100 };
	//2.通过指针指向结构体变量
	struct Student* p = &s;
	//3.通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

	//结构体嵌套结构体
	//创建老师结构体变量
	struct teacher t1;

	// 访问老师结构体中的属性
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;
	// 访问老师结构体中 嵌套的学生结构体 的属性
	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

	cout << "学生 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;
	
	system("pause");
	return 0;
}