#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int Aarray[2], Barray[2];
	//��JAarray
	cout << "�п�J�Ĥ@�ӤG������" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> Aarray[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//��JBarray
	cout << "�п�J�ĤG�ӤG������" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> Barray[i];
		cout << "��" << i << "�Ӽƾڤw�g��J����" << endl;
	}
	cout << endl;
	//�L�X�⧤��
	cout << "�Ĥ@�Ӱ}�C�G";
	for (int i = 0; i < 2; i++)
		cout << setw(3) << Aarray[i];
	cout << endl;
	cout << "�ĤG�Ӱ}�C�G";
	for (int i = 0; i < 2; i++)
		cout << setw(3) << Barray[i];
	cout << endl;
	//�p��
	cout << (Aarray[1] - Barray[1]) << (Aarray[0] - Barray[0] > 0 ? "x-" : "x+")
		<<( (Aarray[0] - Barray[0] )> 0 ? Aarray[0] - Barray[0] : Barray[0] - Aarray[0]) << "y="
			<< Barray[0] * Barray[1] - Aarray[0] * Aarray[1] << endl;
	system("PAUSE");
	return 0;
}