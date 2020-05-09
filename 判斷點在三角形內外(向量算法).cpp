#include <iostream>
#include <iomanip>
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
	//向量Away為A-B
	int Bway[2];
	Bway[0] = array[1][0] - array[0][0];
	Bway[1] = array[1][1] - array[0][1];
	cout << "AB向量：" << "(" << Bway[0] << "," << Bway[1] << ")" << endl;
	//向量Cway為A-C
	int Cway[2];
	Cway[0] = array[2][0] - array[0][0];
	Cway[1] = array[2][1] - array[0][1];
	cout << "AC向量：" << "(" << Cway[0] << "," << Cway[1] << ")" << endl;
	//向量Zway為A-point
	int Zway[2];
	Zway[0] = point[0] - array[0][0];
	Zway[1] = point[1] - array[0][1];
	cout << "A-point向量：" << "(" << Zway[0] << "," << Zway[1] << ")" << endl;
	//建立方程式陣列並計算出a,b
		// a*Bway[0]+b*Cway[0]=Zway[0]
		// a*Bway[1]+b*Cway[1]=Zway[1]
	int last[2][3];
	last[0][0] = Bway[0];
	last[0][1] = Cway[0];
	last[0][2] = Zway[0];
	last[1][0] = Bway[1];
	last[1][1] = Cway[1];
	last[1][2] = Zway[1];
	//D
	float D = last[0][0] * last[1][1] - last[0][1] * last[1][0];
	//Dx
	float Dx = last[0][2] * last[1][1] - last[1][2] * last[0][1];
	//Dy
	float Dy = last[0][0] * last[1][2] - last[0][2] * last[1][0];
	float a = Dx / D;
	float b = Dy / D;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	if ((a + b) <= 1)
		cout << "點在三角形內" << endl;
	else
		cout << "點在三角形外" << endl;
	system("PAUSE");
	return 0;
}