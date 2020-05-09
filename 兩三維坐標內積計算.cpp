#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int Aarray[3], Barray[3];
	//輸入Aarray
	cout << "請輸入第一個三維坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> Aarray[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//輸入Barray
	cout << "請輸入第二個三維坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> Barray[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//印出兩坐標
	cout << "第一個陣列：";
	for (int i = 0; i < 3; i++)
		cout<<setw(3)<<Aarray[i];
	cout << endl;
	cout << "第二個陣列：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Barray[i];
	cout << endl;
	//計算
	int sum=0;
	for (int i = 0; i < 3; i++)
		sum += Aarray[i] * Barray[i];
	//印出正數結果
	if (sum < 0)
		cout << "內積：" << sum * (-1) << endl;
	else
		cout << "內積：" << sum << endl;
	system("PAUSE");
	return 0;
}