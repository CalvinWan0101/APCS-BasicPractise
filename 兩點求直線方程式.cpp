#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int Aarray[2], Barray[2];
	//輸入Aarray
	cout << "請輸入第一個二維坐標" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> Aarray[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//輸入Barray
	cout << "請輸入第二個二維坐標" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> Barray[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//印出兩坐標
	cout << "第一個陣列：";
	for (int i = 0; i < 2; i++)
		cout << setw(3) << Aarray[i];
	cout << endl;
	cout << "第二個陣列：";
	for (int i = 0; i < 2; i++)
		cout << setw(3) << Barray[i];
	cout << endl;
	//計算
	cout << (Aarray[1] - Barray[1]) << (Aarray[0] - Barray[0] > 0 ? "x-" : "x+")
		<<( (Aarray[0] - Barray[0] )> 0 ? Aarray[0] - Barray[0] : Barray[0] - Aarray[0]) << "y="
			<< Barray[0] * Barray[1] - Aarray[0] * Aarray[1] << endl;
	system("PAUSE");
	return 0;
}