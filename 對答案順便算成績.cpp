#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int right[100];
	//��J���T����
	cout << "�D�ơG";
	cin >> number;
	//��J���T����
	cout << "���T���סG";
	for (int i = 0; i < number; i++)
		cin >> right[i];
	//�ǥͼƶq
	int put[10][100];
	int student;
	cout << "�ǥͶq�G";
	cin >> student;
	//��J�ǥ͵���
	for (int i = 0; i < student; i++)
	{
		cout << "��" << i + 1 << "��ǥ͡G";
		for (int j = 0; j < number; j++)
			cin >> put[i][j];
	}
	cout << "����=" << number << endl;

	//��Өíp�⦨�Z
	int sum ;
	for (int i = 0; i < student; i++)
	{
		sum = 0;
		for (int j = 0; j < number; j++)
		{
			if (put[i][j] == right[j])
				sum++;
			if (j == number - 1)
				cout << "��" << i+ 1 << "��ǥ͡G" << sum << endl;
		}
	}
	system("PAUSE");
	return 0;
}