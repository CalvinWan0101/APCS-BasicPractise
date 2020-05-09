#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int point[2];
	int array[3];
	//輸入點坐標
	cout << "請輸入一個平面坐標" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> point[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//輸入方程式係數陣列array(常數項在等號左邊)
	cout << "請輸入方程式係數" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	//預覽點坐標
	cout << "坐標點：";
	cout << "(" << point[0] << "," << point[1] << ")" << endl;
	//預覽方程式
	cout << "直線方程式：";
	cout << array[0] << (array[1] > 0 ? "x+" : "x") << array[1] << (array[2] > 0 ? "y+" : "y") << array[2] << "=0" << endl;
	//代入計算距離公式
	float son, mother;
	son = array[0] * point[0] + array[1] * point[1] + array[2];
	if (son < 0)
		son = son * (-1);
	mother = sqrt(pow(array[0], 2) + pow(array[1], 2));
	cout << "距離：" << son / mother << endl;
	system("PAUSE");
	return 0;
}