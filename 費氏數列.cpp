#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int limit;
	cout << "�L�X�Ʀr�q�G";
	cin >> limit;
	//�ϥΰ}�C
	int array[1000];
	//�ϱoarray�}�C�Y���O��ƦC
	array[0] = 0;
	array[1] = 1;
	array[2] = 1;
	for (int i = 3; i <= 1000; i++)
		array[i] = array[i - 1] + array[i - 2];
	//�L�X�ҿ�J���ƶq
	for (int i = 1; i <= limit; i++)
		cout << array[i] << " ";
	cout << endl;
	system("PAUSE");
	return 0;
}