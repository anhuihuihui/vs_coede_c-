#include"swap.h"
#include<iostream>
using namespace std;
//�����Ķ���
void swap2(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}