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
	//�p��C�H����
	int Saverange[100];
	for (int i = 0; i < 3; i++)
	{
		Saverange[i] = (student[i].chinese + student[i].english + student[i].math) / 3;
	}
	//�p��C�쥭��
	//��奭��
	int Csum;
	for (int i = 0; i < 3; i++)
	{
		Csum = 0;
		Csum += student[i].chinese;
	}
	int Caverange = Csum / 3;
	//�^�奭��
	int Esum;
	for (int i = 0; i < 3; i++)
	{
		Esum = 0;
		Esum += student[i].english;
	}
	int Eaverange = Esum / 3;
	//�ƾǥ���
	int Msum;
	for (int i = 0; i < 3; i++)
	{
		Msum = 0;
		Msum += student[i].math;
	}
	int Maverange = Msum / 3;
	//�L�X����
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << (i + 1) << "��ǥͥ������G" << Saverange[i] << endl;
	}
	cout << "��奭���G" << Caverange << endl;
	cout << "�ƾǥ����G" << Maverange << endl;
	cout << "�^�奭���G" << Eaverange << endl;
	system("PAUSE");
	return 0;
}