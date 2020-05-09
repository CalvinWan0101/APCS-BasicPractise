#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[3][2];
	cout << "請輸入坐標資料" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> array[i][j];
			cout << "(" << i << "," << j << ")" << "已輸入完畢" << endl;
		}
		cout << "第" << i << "個坐標已輸入完畢" << endl;
		cout << endl;
	}
	//預覽已輸入的坐標
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(3)<<array[i][j];
		}
		cout << endl;
	}
	cout << endl;
	//代入三角形面積公式計算
	float area =
		(array[0][0] * array[1][1] + array[1][0] * array[2][1] + array[2][0] * array[0][1]
		- array[1][0] * array[0][1] - array[2][0] * array[1][1] - array[0][0] * array[2][1])/2;
	//面積必須為正	
		if (area < 0)
		area = area * (-1);
	//檢查是否共線
	if (area == 0)
		cout << "共線" << endl;
	else
		cout << "面積：" <<area<<endl;
		system("PAUSE");
	return 0;
}