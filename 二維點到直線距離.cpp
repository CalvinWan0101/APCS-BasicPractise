#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int point[2];
	int array[3];
	//��J�I����
	cout << "�п�J�@�ӥ�������" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> point[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//��J��{���Y�ư}�Carray(�`�ƶ��b��������)
	cout << "�п�J��{���Y��" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	//�w���I����
	cout << "�����I�G";
	cout << "(" << point[0] << "," << point[1] << ")" << endl;
	//�w����{��
	cout << "���u��{���G";
	cout << array[0] << (array[1] > 0 ? "x+" : "x") << array[1] << (array[2] > 0 ? "y+" : "y") << array[2] << "=0" << endl;
	//�N�J�p��Z������
	float son, mother;
	son = array[0] * point[0] + array[1] * point[1] + array[2];
	if (son < 0)
		son = son * (-1);
	mother = sqrt(pow(array[0], 2) + pow(array[1], 2));
	cout << "�Z���G" << son / mother << endl;
	system("PAUSE");
	return 0;
}