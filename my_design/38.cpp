//38��������
#include<iostream>
using namespace std;

void showValue(const int &val)
{
	//val = 10000; //����const�󣬲������޸��β�
	cout << "val= " << val << endl;
}
int main()
{
	int a = 100;
	showValue(a);
	cout << "a= " << a << endl;


	system("pause");
	return 0;
}