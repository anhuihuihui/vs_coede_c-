//sizeofʹ��
# include <iostream>
using namespace std;

int main()
{
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short)<<endl;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	

	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	
	cout << "longlongռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;

	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;
	
	//��ѧ������
	float f2 = 3e2;//3*10^2
	
	cout << "f2:" << f2 << endl;
	
	float f3 = 3e-2; //3*10^-2
	
	cout << "f3:" << f3 << endl;

	
    //�ַ��ͱ���
	char ch = 'a';  //�ַ��ͱ��� �õ����������� ������˫����
	cout << ch << endl;

	//�ַ��ͱ�����ռ�ռ��С
	cout << sizeof(char) << endl;
	
	//�ַ�������Ӧ��ASCII����  ��int��ch
	//a-97  A-65
	cout << (int)ch << endl;
	
	
	system("pause"); 
	return 0;
}