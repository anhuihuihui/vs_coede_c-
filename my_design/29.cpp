//const结构体使用
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
}; 
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent1(const struct student *a)
{
	// a->age = 150; 加入 const 一旦有修改的操作就会报错，可以防止我们的误操作 
	cout << "子函数1打印" << "姓名：" << a->name << " 年龄：" << a->age << " 分数：" << a->score << endl;
}
int main()
{
	//创建结构体变量
	struct student s = {"张三",15,70};

	//通过函数打印结构体变量信息
	printStudent1(&s);
	cout << "main中张三的年龄为：" << s.age <<endl;

	system("pause");
	return 0;
}