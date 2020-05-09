#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[4];
	//輸入資料
	for (int i = 0; i < 4; i++)
	{
		cin >> array[i];
		cout << "第" << i << "個資料已輸入完畢" << endl;
	}
	//印出陣列
	for (int i = 0; i < 4; i++)
		cout << setw(2) << array[i];
	cout << endl;
	//印出合併後的結果
	cout << "合併後：";
	cout << array[0] * 1000 + array[1] * 100 + array[2] * 10 + array[3] << endl;
	system("PAUSE");
	return 0;
}