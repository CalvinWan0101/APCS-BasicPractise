#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int A[3], B[3], C[3];
	//��J�Ĥ@�ӧ���
	cout << "�п�J�Ĥ@�ӧ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> A[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//��J�ĤG�ӧ���
	cout << "�п�J�ĤG�ӧ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> B[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//��J�ĤT�ӧ���
	cout << "�п�J�ĤT�ӧ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> C[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//�L�X�Ĥ@�ӧ���
	cout << "����A�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << A[i];
	cout << endl;
	//�L�X�ĤG�ӧ���
	cout << "����B�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << B[i];
	cout << endl;
	//�L�X�ĤT�ӧ���
	cout << "����C�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << C[i];
	cout << endl;
	int Aarray[3], Carray[3];
	//�DBA=Aarray
	for (int i = 0; i < 3; i++)
		Aarray[i] = B[i] - A[i];
	//�DBC=Carray
	for (int i = 0; i < 3; i++)
		Carray[i] = B[i] - C[i];
	cout << endl;
	//�L�X��V�q
	cout << "�V�qBA�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Aarray[i];
	cout << endl;
	cout << "�V�qBC�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Carray[i];
	cout << endl;
	//�~�n�p��
	cout << "BA�V�q�PBC�V�q�~�n�G";
	int narray[3];
	narray[0] = Aarray[1] * Carray[2] - Aarray[2] * Carray[1];
	narray[1] = Aarray[2] * Carray[0] - Aarray[0] * Carray[2];
	narray[2] = Aarray[0] * Carray[1] - Aarray[1] * Carray[0];
	//�L�X�~�n�᪺���G
	cout << "(" << narray[0] << "," << narray[1] << "," << narray[2] << ")" << endl;
	cout << endl;
	//���@�IA,�k�V�qnarray
	//�p��`�ƶ�
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += A[i] * narray[i];
	}
	sum = sum * (-1);
	//�L�X���G
	cout << "��{���G";
	cout << narray[0] <<
		(narray[1] > 0 ? "x+" : "x") << narray[1] <<
		(narray[2] > 0 ? "y+" : "y") << narray[2] <<
		(sum > 0 ? "z+" : "z") << sum << endl;
	system("PAUSE");
	return 0;
}