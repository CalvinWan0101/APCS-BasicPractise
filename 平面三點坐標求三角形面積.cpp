#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[3][2];
	cout << "�п�J���и��" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> array[i][j];
			cout << "(" << i << "," << j << ")" << "�w��J����" << endl;
		}
		cout << "��" << i << "�ӧ��Фw��J����" << endl;
		cout << endl;
	}
	//�w���w��J������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(3)<<array[i][j];
		}
		cout << endl;
	}
	cout << endl;
	//�N�J�T���έ��n�����p��
	float area =
		(array[0][0] * array[1][1] + array[1][0] * array[2][1] + array[2][0] * array[0][1]
		- array[1][0] * array[0][1] - array[2][0] * array[1][1] - array[0][0] * array[2][1])/2;
	//���n��������	
		if (area < 0)
		area = area * (-1);
	//�ˬd�O�_�@�u
	if (area == 0)
		cout << "�@�u" << endl;
	else
		cout << "���n�G" <<area<<endl;
		system("PAUSE");
	return 0;
}