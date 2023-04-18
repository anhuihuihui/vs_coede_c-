//45成员属性私有化
#include<iostream>
using namespace std;

// **优点1：**将所有成员属性设置为私有，可以自己控制读写权限
// **优点2：**对于写权限，我们可以检测数据的有效性
class Person
{
    private :
        //姓名 可读可写
        string m_name;
        //年龄 只读
        int m_age;
        //爱人 只写
        string m_lover;
    public:
        //姓名 可读可写
        void setName(string name)
        {
            m_name = name; 
        }
        string  getName()
        {
            return m_name;
        }
        //年龄 可读可写
        int getAge()
        {
            //int age =0; //初始化0岁
            return m_age;
        }
         void setAge(int age)
        {
            if(age<0||age>150)
            {
                m_age = 0;
                cout <<"年龄有误"<<endl;
                return; //退出函数
            }
            m_age =age;
        }
         //爱人 只写
        void setLover(string lovver)
        {
            m_lover = lovver;
        }
};
int main()
{
	//实例化 类
    Person p1;
    p1.setName("张三");
    cout << "姓名为： "<<p1.getName()<<endl;

    // p.age =18;
    // p1.setAge(18);  //只允许只读
    p1.setAge(18);
    cout <<"年龄为："<<p1.getAge()<<endl;

    p1.setLover("aaaa");
    // cout <<"情人为： "<<p.getLover()<<endl;
	system("pause");
	return 0;
}