//57��Ա�����ͳ�Ա�����ֿ��洢
#include<iostream>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��
class person
{

};
class student
{
public:

	int num;//�Ǿ�̬��Ա����  ������Ķ����ϵ�

	static int num_b;//��̬��Ա����  ��������Ķ���

	void func() {}//�Ǿ�̬��Ա����  ��һ�ݴ洢�� �������۵Ķ����ϵ�

	static void func2() {}//��̬��Ա����  ��һ�ݴ洢�� �������۵Ķ����ϵ�
};
void test57a()
{
	person p;
	//�ն���ռ���ڴ�ռ�Ϊ1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p= " << sizeof(p) << endl;
}
void test57b()
{
	student s;
	cout << "size of s= " << sizeof(s)<<endl;
}
int main()
{
	test57a();
	test57b();

	system("pause");
	return 0;
}