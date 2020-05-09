#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int A[3];
	float B[2];
	cout << "請輸入整數部分" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> A[i];
		cout << "第" << i << "個資料已輸入完畢" << endl;
	}
	cout << "請輸入小數部分" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> B[i];
		cout << "第" << i << "個資料已輸入完畢" << endl;
	}
	float sum = A[0] * 100 + A[1] * 10 + A[2] + B[0] / 10 + B[1] / 100;
	cout << "合併後：" << sum << endl;
	system("PAUSE");
	return 0;
}