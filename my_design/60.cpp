//60const修饰成员函数
#include<iostream>
using namespace std;

//常函数
class person
{
public:
	//常函数
	person()
	{}
	//this 指针的本质是 指针常量 即指针的指向是不可修改的
	// person * const this
	// 如果想指针指向的值也不可修改 再加 一个const即可 const person * const this
	//在成员函数后加const，修饰的是this指向，让指针指向的值不可修改
	void showPerson()const 
	{
		//this->m_a = 100;//加const后 成了const 既修饰常量又修饰指针
		//this = NULL; //this指针 不可以修改指针的指向  但可以修改指针指向的值（不加const）  

		this->m_b = 100;
	}
	void func()
	{
		this->m_a = 100; // 可以修改指针指向的值（不加const）
	}
	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值, 前面加上mutable
};
void test60a()
{
	 person p;
	p.showPerson();

}
void test60b()
{
	const person p1; // 在对象前加上const 变为常对象
	//p1.m_a = 100; //常对象不允许修改还普通的成员变量
	p1.m_b = 100; // m_b是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p1.showPerson(); 
	//p1.func(); //常对象不能调用普通成员函数 ，因为普通成员函数可以修改成员属性 
}
int main()
{
	test60a();
	test60b();

	system("pause");
	return 0;
}