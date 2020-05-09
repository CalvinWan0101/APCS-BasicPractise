#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	//笲衡才腹 1=+  2=-  3=*  4=/	5=%
	int c;
	int input;
	int answer;
	int right=0, wrong=0;
	//硈尿肈
	for (int i = 1; i <= 10; i++)
	{
		srand(time(NULL));
		a = rand() % (99 - 0 + 1);
		b = rand() % (99 - 0 + 1);
		c = rand() % (5 - 1 + 1);
		switch (c)
		{
			//猭絤策
		case 1:
			answer = a + b;
			cout << a << "+" << b << "=";
			cin >> input;
			if (input == answer)
			{
				cout << "You got it right!" << endl;
				right++;
			}
			else
			{
				cout << "Wrong! The correct answer is" << answer << endl;
				wrong++;
			}
			break;
			//搭猭絤策
		case 2:
			answer = a - b;
			cout << a << "-" << b << "=";
			cin >> input;
			if (input == answer)
			{
				cout << "You got it right!" << endl;
				right++;
			}
			else
			{
				cout << "Wrong! The correct answer is" << answer << endl;
				wrong++;
			}
			break;
			//猭絤策
		case 3:
			answer = a * b;
			cout << a << "*" << b << "=";
			cin >> input;
			if (input == answer)
			{
				cout << "You got it right!" << endl;
				right++;
			}
			else
			{
				cout << "Wrong! The correct answer is" << answer << endl;
				wrong++;
			}
			break;
			//埃猭絤策
		case 4:
			answer = a / b;
			cout << a << "/" << b << "=";
			cin >> input;
			if (input == answer)
			{
				cout << "You got it right!" << endl;
				right++;
			}
			else
			{
				cout << "Wrong! The correct answer is" << answer << endl;
				wrong++;
			}
			break;
			//緇计絤策
		case 5:
			answer = a % b;
			cout << a << "%" << b << "=";
			cin >> input;
			if (input == answer)
			{
				cout << "You got it right!" << endl;
				right++;
			}
			else
			{
				cout << "Wrong! The correct answer is" << answer << endl;
				wrong++;
			}
			break;
		}
	}
	cout << "璸" << endl;
	cout << "氮癸肈计" << right << endl;
	cout << "氮岿肈计" << wrong << endl;
	system("PAUSE");
	return 0;
}