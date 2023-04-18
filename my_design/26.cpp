//结构体
#include<iostream>
using namespace std;

//1。创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型

struct Student  //结构体创建时定义时 struct 关键字不能省略
{
	//成员列表

	//姓名
	string name;

	//年龄
	int age;

	//分数
	int score;


}s3;  //顺便创建一个结构体变量

//通过学生类型创建具体学生


int main()
{
	//2.1 struct Student S1
	struct Student s1;  //结构体变量创建时 struct 关键字可以省略
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

	//2.2 sturct Student S2 = {...}
	struct Student s2 = { "李四",20,100 };

	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
	//2.3 在定义结构时顺便创建结构体变量
	 //第三种用的比较少  前两种用的比较多
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;




	//结构体数组
	// 1.定义一个结构体

	//main函数外定义的Student结构体

	// 2.创建一个结构体数组
	//struct 结构体名 数组名[元素个数] = { {} , {} , ... {} }
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,60 },
		{"王五",20,70 }

	};
	// 3.给结构体数组中的元素赋值

	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	
	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name 
			<< " 年龄：" << stuArray[i].age 
			<< " 分数：" << stuArray[i].score << endl;
		/*cout << stuArray->age << stuArray->name << stuArray->score << endl;
		stuArray++;*/
	}
	
	system("pause");
	return 0;
}