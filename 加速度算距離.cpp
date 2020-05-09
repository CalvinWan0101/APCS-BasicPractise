#include <iostream>
using namespace std;
const int g = 9.8;
int main(int argc, char** argv)
{
	int v, t;
	cout << "請依序輸入初速度和時間並以空格為間隔" << endl;
	cin >> v >> t;
	cout << "初速度：" << v << endl;
	cout << "時間：" << t << endl;
	int distance = v*t + g * pow(t, 2) / 2;
	cout << "所行走的距離為：" << distance << endl;
	system("PAUSE");
	return 0;
}