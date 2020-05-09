#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	long long money;
	cout << "收入：";
	cin >> money;
	float text;
	if (money <= 300000)
		text = money * 6 / 100;
	else if (money <= 800000)
		text = 300000 * 6 / 100 + (money - 300000) * 13 / 100;
	else if (money <= 2000000)
		text = 300000 * 6 / 100 + 500000 * 13 / 100 + (money - 800000) * 21 / 100;
	else 
		text = 300000 * 6 / 100 + 500000 * 13 / 100 + 120000 * 21 / 100 + (money - 2000000) * 3 / 10;
	cout << "需繳交的稅金：" << text << endl;
	system("PAUSE");
	return 0;
}