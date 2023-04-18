//50构造函数和析构函数
#include<iostream>
using namespace std;

class person
{
public:
	//构造函数
	//构造函数，没有返回值也不些void
	//函数名称和类名称相同
	//构造函数可以有参数，因此可以发生重载
	//程序在调用对象时会自动调用构造函数，无需手动调用，而且只会调用一次
	

	//按照参数分类 无参构造 和 有参构造
	//无参构造函数 也称 默认构造函数
	person()
	{
		cout << "调用无参构造函数" << endl;
	}
	//有参构造函数 （函数的重载）
	person(int a)
	{
		age = a;
		cout << "调用有参构造函数" << endl;
	}

	//按照类型分类 普通构造 和 拷贝构造
	//拷贝构造
	person(const person &p)
	{
		age = p.age;
		cout << "调用拷贝构造函数" << endl;
	}
	

	//析构函数
	//析构函数，没有返回值也不写void
	//函数名称与类名相同，在名称前加上符号~
	//析构函数不可以有参数，因此不可以发生重载
	//程序在对象销毁前会自动调用西沟，无需手动调用，而且只会调用一次
	~person()
	{
		cout << "调用析构函数" << endl;
	}

	int age;
};

//构造函数的调用
void testXG()
{
	//1.括号法
	person p1; // 默认构造函数调用 在栈上的数据 testXG执行完毕后，释放这个对象
	person p2(10); //有参构造函数调用
	person p3(p2);
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;
	//注意事项1：
	// 调用默认构造函数时候，不要加()
	// person p1()
	// 因为编译器会认为是一个函数的声明，不会认为在创建对象
	
	////2.显示法
	//person p1;
	//person p2 = person(10);//有参拷贝
	//person p3 = person(p2);//拷贝构造

	//person(10);//匿名对象 特点：当前行执行结束后，系统就会立即回收掉匿名对象
	//cout << "aaaa" << endl;

	////注意事项2：
	//// person(p3)   
	////不要利用拷贝构造函数 初始化匿名对象  编译器会认为其是一个对象
	//
	////3.隐式转换法
	//person p4 = 10;//有参构造 相当于 person p4 = person(10);
	//person p5 = p4;//有参构造 相当于 person p5 = person(p4);
}
int main()
{
	testXG();

	//person p;


	system("pause");
	return 0;
}