#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int money;
	cout << "�����׼ơG";
	cin >> number;
	if (number <= 100)
		money = number * 3;
	else if (number <= 300)
		money = 100 * 3 + (number - 100) * 5;
	else
		money = 100 * 3 + 200 * 5 + (number - 300) * 6;
	cout << "���O�G" << money << endl;
	system("PAUSE");
	return 0;
}