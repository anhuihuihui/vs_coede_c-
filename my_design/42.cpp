#include<iostream>
using namespace std;


//���һ��Բ�� ��Բ���ܳ�
//���ܳ��Ĺ�ʽ��2*PI*�뾶
const double PI = 3.14;
//class�������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����  ͨ������һЩ����
	int m_r;
	//��Ϊ  ͨ������һЩ����
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ�� ���������Բ������
	//ʵ������ͨ��һ���� ����һ������Ĺ��̣�
	Circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ; " << c1.calculateZC() << endl;



	system("pause");
	return 0;
}