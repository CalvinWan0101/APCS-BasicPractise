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
		cout<<setw(3)<<Aarray[i];
	cout << endl;
	cout << "�ĤG�Ӱ}�C�G";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Barray[i];
	cout << endl;
	//�p��
	int sum=0;
	for (int i = 0; i < 3; i++)
		sum += Aarray[i] * Barray[i];
	//�L�X���Ƶ��G
	if (sum < 0)
		cout << "���n�G" << sum * (-1) << endl;
	else
		cout << "���n�G" << sum << endl;
	system("PAUSE");
	return 0;
}