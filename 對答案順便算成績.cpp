#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int right[100];
	//輸入正確答案
	cout << "題數：";
	cin >> number;
	//輸入正確答案
	cout << "正確答案：";
	for (int i = 0; i < number; i++)
		cin >> right[i];
	//學生數量
	int put[10][100];
	int student;
	cout << "學生量：";
	cin >> student;
	//輸入學生答案
	for (int i = 0; i < student; i++)
	{
		cout << "第" << i + 1 << "位學生：";
		for (int j = 0; j < number; j++)
			cin >> put[i][j];
	}
	cout << "滿分=" << number << endl;

	//對照並計算成績
	int sum ;
	for (int i = 0; i < student; i++)
	{
		sum = 0;
		for (int j = 0; j < number; j++)
		{
			if (put[i][j] == right[j])
				sum++;
			if (j == number - 1)
				cout << "第" << i+ 1 << "位學生：" << sum << endl;
		}
	}
	system("PAUSE");
	return 0;
}