#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv)
{
	int array[50];
	for (int i = 0; i < 50; i++)
		array[i] = rand() % (100 - 1 + 1);
	cout << "�Ҧ��H�����Z���G" << endl;
	for (int i = 0; i < 50; i++)
		cout <<"��"<<setw(2)<<i+1<<"��P�ǡG"<<setw(2)<<array[i] << endl;
	int classify[10] = {0};
	for (int i = 0; i < 50; i++)
	{
		if (array[i] < 10)
			classify[0]++;
		else if (array[i] < 20)
			classify[1]++;
		else if (array[i] < 30)
			classify[2]++;
		else if (array[i] < 40)
			classify[3]++;
		else if (array[i] < 50)
			classify[4]++;
		else if (array[i] < 60)
			classify[5]++;
		else if (array[i] < 70)
			classify[6]++;
		else if (array[i] < 80)
			classify[7]++;
		else if (array[i] < 90)
			classify[8]++;
		else if (array[i] < 100)
			classify[9]++;
	}
	cout << endl;
	cout << "01~09�G" << classify[0] << endl;
	cout << "10~19�G" << classify[1] << endl;
	cout << "20~29�G" << classify[2] << endl;
	cout << "30~39�G" << classify[3] << endl;
	cout << "40~49�G" << classify[4] << endl;
	cout << "50~59�G" << classify[5] << endl;
	cout << "60~69�G" << classify[6] << endl;
	cout << "70~79�G" << classify[7] << endl;
	cout << "80~89�G" << classify[8] << endl;
	cout << "90~99�G" << classify[9] << endl;
	int sum=0;
	for (int i = 0; i < 10; i++)
		sum += classify[i];
	cout << "�@�p" << sum << "�H" << endl;
	system("PAUSE");
	return 0;
}