#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int A[3], B[3];
	//輸入方程式資料
	cout << "請輸入第一個方程式係數" << endl;
	for (int i = 0; i < 3; i++)
		cin >> A[i];
	cout << "請輸入第一個方程式係數" << endl;
	for (int i = 0; i < 3; i++)
		cin >> B[i];
	cout << endl;
	//預覽所輸入的方程式
	cout << "方程式A：" << A[0] << (A[1] > 0 ? "x+" : "x") << A[1] << "y=" << A[2]<<endl;
	cout << "方程式B：" << B[0] << (B[1] > 0 ? "x+" : "x") << B[1] << "y=" << B[2]<<endl;
	cout << endl;
	//比較方程式A,B之間的關係
	if (A[1] * B[0] == A[0] * B[1] && A[0] * B[2] == A[2] * B[0] && A[1] * B[2] == A[2] * B[1])
		cout << "方程式A與方程式B重合" << endl;
	else if (A[1] * B[0] == A[0] * B[1] && A[0] * B[2] != A[2] * B[0] && A[1] * B[2] != A[2] * B[1])
	{
		float distance = (A[2] - B[2]) / sqrt(pow(A[0], 2) + pow(A[1], 2));
		if (distance < 0)
			distance = distance * (-1);
		cout << "方程式A與方程式B平行，距離為" << distance << endl;
	}
	else
	{
		//D
		float D = A[0] * B[1] - A[1] * B[0];
		//Dx
		float Dx = A[2] * B[1] - A[1] * B[2];
		//Dy
		float Dy = A[0] * B[2] - A[2] * B[0];
		float x = Dx / D;
		float y = Dy / D;
		cout << "方程式A與方程式B相交於（"<<x<<","<<y<<")一點" << endl;
	}
	system("PAUSE");
	return 0;
}