#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int A[3], B[3], C[3];
	//輸入第一個坐標
	cout << "請輸入第一個坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> A[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//輸入第二個坐標
	cout << "請輸入第二個坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> B[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//輸入第三個坐標
	cout << "請輸入第三個坐標" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> C[i];
		cout << "第" << i << "個數據已經輸入完畢" << endl;
	}
	cout << endl;
	//印出第一個坐標
	cout << "坐標A：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << A[i];
	cout << endl;
	//印出第二個坐標
	cout << "坐標B：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << B[i];
	cout << endl;
	//印出第三個坐標
	cout << "坐標C：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << C[i];
	cout << endl;
	int Aarray[3], Carray[3];
	//求BA=Aarray
	for (int i = 0; i < 3; i++)
		Aarray[i] = B[i] - A[i];
	//求BC=Carray
	for (int i = 0; i < 3; i++)
		Carray[i] = B[i] - C[i];
	cout << endl;
	//印出兩向量
	cout << "向量BA：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Aarray[i];
	cout << endl;
	cout << "向量BC：";
	for (int i = 0; i < 3; i++)
		cout << setw(3) << Carray[i];
	cout << endl;
	//外積計算
	cout << "BA向量與BC向量外積：";
	int narray[3];
	narray[0] = Aarray[1] * Carray[2] - Aarray[2] * Carray[1];
	narray[1] = Aarray[2] * Carray[0] - Aarray[0] * Carray[2];
	narray[2] = Aarray[0] * Carray[1] - Aarray[1] * Carray[0];
	//印出外積後的結果
	cout << "(" << narray[0] << "," << narray[1] << "," << narray[2] << ")" << endl;
	cout << endl;
	//取一點A,法向量narray
	//計算常數項
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += A[i] * narray[i];
	}
	sum = sum * (-1);
	//印出結果
	cout << "方程式：";
	cout << narray[0] <<
		(narray[1] > 0 ? "x+" : "x") << narray[1] <<
		(narray[2] > 0 ? "y+" : "y") << narray[2] <<
		(sum > 0 ? "z+" : "z") << sum << endl;
	system("PAUSE");
	return 0;
}