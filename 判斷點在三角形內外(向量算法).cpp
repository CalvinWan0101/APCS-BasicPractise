#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	//��J�T���Χ��и��
	int array[3][2];
	cout << "�п�J�T���Χ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
		cout << "��" << i << "�ӧ��Фw��J����" << endl;
		cout << endl;
	}
	cout << endl;
	//��J�ҭn�˴�������
	int point[2];
	cout << "�п�J�ҭn�˴�������" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> point[i];
		cout << "��" << i << "�Ӹ�Ƥw�g��J����" << endl;
	}
	cout << endl;
	//�w���w��J������
	cout << "�T���ΤT���СG" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(3) << array[i][j];
		}
		cout << endl;
	}
	cout << endl;
	//�w���n�˴�������
	cout << "���˴����СG" << "(" << point[0] << "," << point[1] << ")" << endl;
	//�V�qAway��A-B
	int Bway[2];
	Bway[0] = array[1][0] - array[0][0];
	Bway[1] = array[1][1] - array[0][1];
	cout << "AB�V�q�G" << "(" << Bway[0] << "," << Bway[1] << ")" << endl;
	//�V�qCway��A-C
	int Cway[2];
	Cway[0] = array[2][0] - array[0][0];
	Cway[1] = array[2][1] - array[0][1];
	cout << "AC�V�q�G" << "(" << Cway[0] << "," << Cway[1] << ")" << endl;
	//�V�qZway��A-point
	int Zway[2];
	Zway[0] = point[0] - array[0][0];
	Zway[1] = point[1] - array[0][1];
	cout << "A-point�V�q�G" << "(" << Zway[0] << "," << Zway[1] << ")" << endl;
	//�إߤ�{���}�C�íp��Xa,b
		// a*Bway[0]+b*Cway[0]=Zway[0]
		// a*Bway[1]+b*Cway[1]=Zway[1]
	int last[2][3];
	last[0][0] = Bway[0];
	last[0][1] = Cway[0];
	last[0][2] = Zway[0];
	last[1][0] = Bway[1];
	last[1][1] = Cway[1];
	last[1][2] = Zway[1];
	//D
	float D = last[0][0] * last[1][1] - last[0][1] * last[1][0];
	//Dx
	float Dx = last[0][2] * last[1][1] - last[1][2] * last[0][1];
	//Dy
	float Dy = last[0][0] * last[1][2] - last[0][2] * last[1][0];
	float a = Dx / D;
	float b = Dy / D;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	if ((a + b) <= 1)
		cout << "�I�b�T���Τ�" << endl;
	else
		cout << "�I�b�T���Υ~" << endl;
	system("PAUSE");
	return 0;
}