//45��Ա����˽�л�
#include<iostream>
using namespace std;

// **�ŵ�1��**�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
// **�ŵ�2��**����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
class Person
{
    private :
        //���� �ɶ���д
        string m_name;
        //���� ֻ��
        int m_age;
        //���� ֻд
        string m_lover;
    public:
        //���� �ɶ���д
        void setName(string name)
        {
            m_name = name; 
        }
        string  getName()
        {
            return m_name;
        }
        //���� �ɶ���д
        int getAge()
        {
            //int age =0; //��ʼ��0��
            return m_age;
        }
         void setAge(int age)
        {
            if(age<0||age>150)
            {
                m_age = 0;
                cout <<"��������"<<endl;
                return; //�˳�����
            }
            m_age =age;
        }
         //���� ֻд
        void setLover(string lovver)
        {
            m_lover = lovver;
        }
};
int main()
{
	//ʵ���� ��
    Person p1;
    p1.setName("����");
    cout << "����Ϊ�� "<<p1.getName()<<endl;

    // p.age =18;
    // p1.setAge(18);  //ֻ����ֻ��
    p1.setAge(18);
    cout <<"����Ϊ��"<<p1.getAge()<<endl;

    p1.setLover("aaaa");
    // cout <<"����Ϊ�� "<<p.getLover()<<endl;
	system("pause");
	return 0;
}