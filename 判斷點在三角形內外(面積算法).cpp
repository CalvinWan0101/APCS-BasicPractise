#include <iostream>
#include <iomanip>

//�p�⭱�n���ϥΪ̨��
float Carea(int array[3][2])
{
	float area = (array[0][0] * array[1][1] + array[1][0] * array[2][1] + array[2][0] * array[0][1] - array[1][0] * array[0][1] - array[2][0] * array[1][1] - array[0][0] * array[2][1]) / 2;
	if (area < 0)
		area = area * (-1);
	return area;
}

//���s�]�warray����
void reset(int target[3][2], int source[3][2])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			target[i][j] = source[i][j];
}
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


	//�Q��bubble sort�Ƨ�x,y���Ъ��̤j�̤p(���~�A�ȯ�P�_�]�t�T���Ϊ��x�Ϊ��d��)

	//�k1.���n��k
	float orgin=Carea(array);
	int buffer[3][2];
	float area = 0;
	//�Narray���Ƚƻs��buffer�Ȧs��
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			buffer[i][j] = array[i][j];
	//�˴����д�����A�D���n
	array[0][0] = point[0];
	array[0][1] = point[1];
	area += Carea(array);
	cout << "�Ĥ@�ӤT���έ��n�G" << Carea(array)<<endl;
	reset(array, buffer);
	//�˴����д�����B�D���n
	array[1][0] = point[0];
	array[1][1] = point[1];
	Carea(array);
	area += Carea(array);
	cout << "�ĤG�ӤT���έ��n�G" << Carea(array)<<endl;
	reset(array, buffer);
	//�˴����д�����C�D���n
	array[2][0] = point[0];
	array[2][1] = point[1];
	Carea(array);
	area += Carea(array);
	cout << "�ĤT�ӤT���έ��n�G" << Carea(array)<<endl;
	reset(array, buffer);
	//A+B+C�P�쭱�n����P�_�O�_�۵�
	if (area == orgin)
		cout << "���Цb�b�I��" << endl;
	else
		cout << "���Цb�I�~" << endl;

	system("PAUSE");
	return 0;
}