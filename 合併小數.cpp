#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int A[3];
	float B[2];
	cout << "�п�J��Ƴ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> A[i];
		cout << "��" << i << "�Ӹ�Ƥw��J����" << endl;
	}
	cout << "�п�J�p�Ƴ���" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> B[i];
		cout << "��" << i << "�Ӹ�Ƥw��J����" << endl;
	}
	float sum = A[0] * 100 + A[1] * 10 + A[2] + B[0] / 10 + B[1] / 100;
	cout << "�X�֫�G" << sum << endl;
	system("PAUSE");
	return 0;
}