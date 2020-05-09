#include <iostream>
using namespace std;
struct score
{
	char name[20];
	int chinese;
	int english;
	int math;
};
int main(int argc, char** argv)
{
	score student[3];
	student[0] = { "AA", 22, 33, 44 };
	student[1] = { "BB", 55, 66, 77 };
	student[2] = { "CC", 88, 99, 99 };
	//計算每人平均
	int Saverange[100];
	for (int i = 0; i < 3; i++)
	{
		Saverange[i] = (student[i].chinese + student[i].english + student[i].math) / 3;
	}
	//計算每科平均
	//國文平均
	int Csum;
	for (int i = 0; i < 3; i++)
	{
		Csum = 0;
		Csum += student[i].chinese;
	}
	int Caverange = Csum / 3;
	//英文平均
	int Esum;
	for (int i = 0; i < 3; i++)
	{
		Esum = 0;
		Esum += student[i].english;
	}
	int Eaverange = Esum / 3;
	//數學平均
	int Msum;
	for (int i = 0; i < 3; i++)
	{
		Msum = 0;
		Msum += student[i].math;
	}
	int Maverange = Msum / 3;
	//印出平均
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << (i + 1) << "位學生平均為：" << Saverange[i] << endl;
	}
	cout << "國文平均：" << Caverange << endl;
	cout << "數學平均：" << Maverange << endl;
	cout << "英文平均：" << Eaverange << endl;
	system("PAUSE");
	return 0;
}