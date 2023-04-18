//61全局函数做友元
#include<iostream>
using namespace std;

class building
{
	//全局函数做友元  friend
	friend void goodGay(building* build);

public:
	building()
	{
		m_sittingRoom = "客厅";
		this->m_bedRoom = "卧室";

	}
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
};

//全局函数
void goodGay(building* build)
{
	cout << "好基友全局函数 正在访问： " << build->m_sittingRoom << endl;

	cout << "好基友全局函数 正在访问： " << build->m_bedRoom << endl;
}
void test61a()
{
	building build1;
	goodGay(&build1);
}
int main()
{
	test61a();

	system("pause");
	return 0;
}