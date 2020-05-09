#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int day,mile, money;
	cout << "里程數：";
	cin >> mile;
	cout << "輸入1代表白天,輸入2代表晚上" << endl;
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
	cout << "車錢：" << money << endl;
	system("PAUSE");
	return 0;
}*/