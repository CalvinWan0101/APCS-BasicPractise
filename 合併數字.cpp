#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[4];
	//��J���
	for (int i = 0; i < 4; i++)
	{
		cin >> array[i];
		cout << "��" << i << "�Ӹ�Ƥw��J����" << endl;
	}
	//�L�X�}�C
	for (int i = 0; i < 4; i++)
		cout << setw(2) << array[i];
	cout << endl;
	//�L�X�X�᪺֫���G
	cout << "�X�֫�G";
	cout << array[0] * 1000 + array[1] * 100 + array[2] * 10 + array[3] << endl;
	system("PAUSE");
	return 0;
}