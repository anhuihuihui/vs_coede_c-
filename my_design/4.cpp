// 转义字符
#include <iostream>
using namespace std;

#include <string>
int main()
{
    // 换行符 \n

    cout << "hello word" << endl;

    cout << "hello word\n";

    //反斜杠  \\

    cout << "\\" << endl;

    //水平制表符 \t

    cout << "aaa\thelloworld" << endl;   //制表符 \t 表示8个字节 输出数据窗口更整齐
    cout << "aaaa\thelloworld" << endl;
    cout << "aaaaa\thelloworld" << endl;

    //1.c风格的字符串
    //注意事项： char 字符串名[]
    //注意事项2  等号后面要用双引号 包含起来字符串
    char str[] = "bcdefghij";

    cout << str << endl;
    
    //2.c++风格的字符串
    // 注意事项 包含一个头文件 # include<string>
    string str2 = "bcdefghij";

    cout << str2 << endl;



    //创建bool数据类型
    bool flag = true;

    cout << flag << endl;   //打印结果为：1  真的本质上就是1；0本质上代表假
    //查看bool类型所占内存空间

    cout << "bool类型所占内存空间为："<<sizeof(flag) << endl;


    //不同数据类型的输入

    // 1.整型
    int a = 0;
    cout << "请给整型变量a赋值：" << endl;
    cin >> a;
    cout << "整型变量a的值为：" << a << endl;

    //2.浮点型
    float b = 3.14f;
    cout << "请给浮点型变量b赋值：" << endl;
    cin >>b;
    cout << "浮点型变量b的值为：" <<b << endl;

    //3.字符型变量


    //4.字符串型变量


    //5.bool类型  只要输入的为非0 就为真




    system("pause");
    return 0;
}