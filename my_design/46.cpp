//46��������
#include<iostream>
using namespace std;

//�����������(Cube)
//������������������
//�ֱ��� ȫ�ֺ��� �� ��Ա���� �ж������������Ƿ���ȡ�
class Cube
{
private:
	//����
	int m_l;
	int m_w;
	int m_h;
public:
	//��Ϊ
	void setM_l(int l)
	{
		m_l = l;
	}
	int getM_l()
	{
		return m_l;
	}
	void setM_w(int w)
	{
		m_w = w;
	}
	int getM_w()
	{
		return m_w;
	}
	void setM_h(int h)
	{
		m_h = h;
	}
	int getM_h()
	{
		return m_h;
	}
	//��ȡ����������
	int calculateS()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_h * m_w;
	}
	//��ȡ���������
	int calculatev()
	{
		return   m_h * m_l * m_w;
	}
	//���ó�Ա�����ж����������Ƿ����
	bool isSameByClass(Cube& c)
	{
		if (m_h == c.getM_h() && m_l == c.getM_l() && m_w == c.getM_w())
		{
			return true;
		}
		return false;
	}
};
//����ȫ�ֺ������ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getM_h() == c2.getM_h()&&c1.getM_l() == c2.getM_l() && c1.getM_w() == c2.getM_w())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.setM_h(10);
	c1.setM_l(10);
	c1.setM_w(10);
	cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
	cout << "c1�����Ϊ�� " << c1.calculatev() << endl;

	Cube c2;
	c2.setM_h(10);
	c2.setM_l(20);
	c2.setM_w(10);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	bool ret2 = c1.isSameByClass(c2);
	if (ret2)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;
}