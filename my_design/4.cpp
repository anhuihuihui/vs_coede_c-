// ת���ַ�
#include <iostream>
using namespace std;

#include <string>
int main()
{
    // ���з� \n

    cout << "hello word" << endl;

    cout << "hello word\n";

    //��б��  \\

    cout << "\\" << endl;

    //ˮƽ�Ʊ�� \t

    cout << "aaa\thelloworld" << endl;   //�Ʊ�� \t ��ʾ8���ֽ� ������ݴ��ڸ�����
    cout << "aaaa\thelloworld" << endl;
    cout << "aaaaa\thelloworld" << endl;

    //1.c�����ַ���
    //ע����� char �ַ�����[]
    //ע������2  �Ⱥź���Ҫ��˫���� ���������ַ���
    char str[] = "bcdefghij";

    cout << str << endl;
    
    //2.c++�����ַ���
    // ע������ ����һ��ͷ�ļ� # include<string>
    string str2 = "bcdefghij";

    cout << str2 << endl;



    //����bool��������
    bool flag = true;

    cout << flag << endl;   //��ӡ���Ϊ��1  ��ı����Ͼ���1��0�����ϴ����
    //�鿴bool������ռ�ڴ�ռ�

    cout << "bool������ռ�ڴ�ռ�Ϊ��"<<sizeof(flag) << endl;


    //��ͬ�������͵�����

    // 1.����
    int a = 0;
    cout << "������ͱ���a��ֵ��" << endl;
    cin >> a;
    cout << "���ͱ���a��ֵΪ��" << a << endl;

    //2.������
    float b = 3.14f;
    cout << "��������ͱ���b��ֵ��" << endl;
    cin >>b;
    cout << "�����ͱ���b��ֵΪ��" <<b << endl;

    //3.�ַ��ͱ���


    //4.�ַ����ͱ���


    //5.bool����  ֻҪ�����Ϊ��0 ��Ϊ��




    system("pause");
    return 0;
}