//sizeof使用
# include <iostream>
using namespace std;

int main()
{
	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short)<<endl;
	cout << "short占用内存空间为：" << sizeof(num1) << endl;
	

	cout << "int占用内存空间为：" << sizeof(int) << endl;
	
	cout << "long占用内存空间为：" << sizeof(long) << endl;
	
	cout << "longlong占用内存空间为：" << sizeof(long long) << endl;
	
	cout << "float占用内存空间为：" << sizeof(float) << endl;

	cout << "double占用内存空间为：" << sizeof(double) << endl;
	
	//科学计数法
	float f2 = 3e2;//3*10^2
	
	cout << "f2:" << f2 << endl;
	
	float f3 = 3e-2; //3*10^-2
	
	cout << "f3:" << f3 << endl;

	
    //字符型变量
	char ch = 'a';  //字符型变量 用单引号括起来 不能用双引号
	cout << ch << endl;

	//字符型变量所占空间大小
	cout << sizeof(char) << endl;
	
	//字符变量对应的ASCII编码  （int）ch
	//a-97  A-65
	cout << (int)ch << endl;
	
	
	system("pause"); 
	return 0;
}