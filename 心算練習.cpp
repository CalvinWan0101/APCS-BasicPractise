#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	//�B��Ÿ� 1=+  2=-  3=*  4=/	5=%
	int c;
	int input;
	int answer;
	int right=0, wrong=0;
	//�s��X�Q�D
	for (int i = 1; i <= 10; i++)
	{
		srand(time(NULL));
		a = rand() % (99 - 0 + 1);
		b = rand() % (99 - 0 + 1);
		c = rand() % (5 - 1 + 1);
		switch (c)
		{
			//�[�k�m��
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
			//��k�m��
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
			//���k�m��
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
			//���k�m��
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
			//�l�ƽm��
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
	cout << "�@�p" << endl;
	cout << "�����D�ơG" << right << endl;
	cout << "�����D�ơG" << wrong << endl;
	system("PAUSE");
	return 0;
}