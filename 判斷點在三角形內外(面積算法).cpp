#include <iostream>
#include <iomanip>

//計算面積的使用者函數
float Carea(int array[3][2])
{
	float area = (array[0][0] * array[1][1] + array[1][0] * array[2][1] + array[2][0] * array[0][1] - array[1][0] * array[0][1] - array[2][0] * array[1][1] - array[0][0] * array[2][1]) / 2;
	if (area < 0)
		area = area * (-1);
	return area;
}

//重新設定array的值
void reset(int target[3][2], int source[3][2])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			target[i][j] = source[i][j];
}
using namespace std;
int main(int argc, char** argv)
{
	//輸入三角形坐標資料
	int array[3][2];
	cout << "請輸入三角形坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
		cout << "第" << i << "個坐標已輸入完畢" << endl;
		cout << endl;
	}
	cout << endl;
	//輸入所要檢測的坐標
	int point[2];
	cout << "請輸入所要檢測的坐標" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> point[i];
		cout << "第" << i << "個資料已經輸入完畢" << endl;
	}
	cout << endl;
	//預覽已輸入的坐標
	cout << "三角形三坐標：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(3) << array[i][j];
		}
		cout << endl;
	}
	cout << endl;
	//預覽要檢測的坐標
	cout << "待檢測坐標：" << "(" << point[0] << "," << point[1] << ")" << endl;


	//利用bubble sort排序x,y坐標的最大最小(錯誤，僅能判斷包含三角形的矩形的範圍)

	//法1.面積算法
	float orgin=Carea(array);
	int buffer[3][2];
	float area = 0;
	//將array的值複製給buffer暫存器
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			buffer[i][j] = array[i][j];
	//檢測坐標替換掉A求面積
	array[0][0] = point[0];
	array[0][1] = point[1];
	area += Carea(array);
	cout << "第一個三角形面積：" << Carea(array)<<endl;
	reset(array, buffer);
	//檢測坐標替換掉B求面積
	array[1][0] = point[0];
	array[1][1] = point[1];
	Carea(array);
	area += Carea(array);
	cout << "第二個三角形面積：" << Carea(array)<<endl;
	reset(array, buffer);
	//檢測坐標替換掉C求面積
	array[2][0] = point[0];
	array[2][1] = point[1];
	Carea(array);
	area += Carea(array);
	cout << "第三個三角形面積：" << Carea(array)<<endl;
	reset(array, buffer);
	//A+B+C與原面積比較判斷是否相等
	if (area == orgin)
		cout << "坐標在在點內" << endl;
	else
		cout << "坐標在點外" << endl;

	system("PAUSE");
	return 0;
}