#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int Aarray[3], Barray[3];
	//��JAarray
	cout << "�п�J�Ĥ@�ӤT������" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> Aarray[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//��JBarray
	cout << "�п�J�ĤG�ӤT������" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> Barray[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//�L�X�⧤��
	cout << "�Ĥ@�Ӱ}�C�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Aarray[i];
	cout << endl;
	cout << "�ĤG�Ӱ}�C�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Barray[i];
	cout << endl;
	//�~�n�p��
	int narray[3];
	narray[0] = Aarray[1] * Barray[2] - Aarray[2] * Barray[1];
	narray[1] = Aarray[2] * Barray[0] - Aarray[0] * Barray[2];
	narray[2] = Aarray[0] * Barray[1] - Aarray[1] * Barray[0];
	//�L�X�~�n�᪺���G
	cout << "(" << narray[0] << "," << narray[1] << "," << narray[2] << ")" << endl;
	system("PAUSE");
	return 0;
}