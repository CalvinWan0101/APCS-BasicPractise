#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int day,mile, money;
	cout << "���{�ơG";
	cin >> mile;
	cout << "��J1�N��դ�,��J2�N��ߤW" << endl;
	cin >> day;
	if (day == 1)
	{
		if(mile<1000)
		money = 60;
		else 
		{
			if ((mile - 1000) % 500 != 0)
			{
				money = 60+((mile - 1000) / 500 + 1) * 6;
			}
			else
				money = 60 + ((mile - 1000) / 500 ) * 6;
		}
	}
	else
	{
		if (mile < 1000)
			money = 60;
		else
		{
			if ((mile - 1000) % 300 != 0)
			{
				money = 60 + ((mile - 1000) / 300 + 1) * 6;
			}
			else
				money = 60 + ((mile - 1000) / 300) * 6;
		}
	}
	cout << "�����G" << money << endl;
	system("PAUSE");
	return 0;
}*/