#include<iostream>
using namespace std;

//创建学生类 属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class student
{
public:
	//属性
	string m_name;
	int m_id;
	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名：" << m_name << " 学号： " << m_id << endl;
	}
	void setName(string name)
	{
		m_name = name;
	}
	void setId(int id)
	{
		m_id = id;
	}
};
int main()
{
	//创建一个和具体的学生   实例化对象
	student S;
	
	//给s1对象 进行属性赋值操作
	/*S.m_name = "张三";
	S.m_id = 4625051;*/
	S.setName("张三");
	S.setId(4625051);
	S.showStudent();
	


	system("pause");
	return 0;
}