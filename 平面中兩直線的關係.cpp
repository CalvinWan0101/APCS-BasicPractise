#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int A[3], B[3];
	//��J��{�����
	cout << "�п�J�Ĥ@�Ӥ�{���Y��" << endl;
	for (int i = 0; i < 3; i++)
		cin >> A[i];
	cout << "�п�J�Ĥ@�Ӥ�{���Y��" << endl;
	for (int i = 0; i < 3; i++)
		cin >> B[i];
	cout << endl;
	//�w���ҿ�J����{��
	cout << "��{��A�G" << A[0] << (A[1] > 0 ? "x+" : "x") << A[1] << "y=" << A[2]<<endl;
	cout << "��{��B�G" << B[0] << (B[1] > 0 ? "x+" : "x") << B[1] << "y=" << B[2]<<endl;
	cout << endl;
	//�����{��A,B���������Y
	if (A[1] * B[0] == A[0] * B[1] && A[0] * B[2] == A[2] * B[0] && A[1] * B[2] == A[2] * B[1])
		cout << "��{��A�P��{��B���X" << endl;
	else if (A[1] * B[0] == A[0] * B[1] && A[0] * B[2] != A[2] * B[0] && A[1] * B[2] != A[2] * B[1])
	{
		float distance = (A[2] - B[2]) / sqrt(pow(A[0], 2) + pow(A[1], 2));
		if (distance < 0)
			distance = distance * (-1);
		cout << "��{��A�P��{��B����A�Z����" << distance << endl;
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
		cout << "��{��A�P��{��B�ۥ��]"<<x<<","<<y<<")�@�I" << endl;
	}
	system("PAUSE");
	return 0;
}