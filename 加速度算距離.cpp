#include <iostream>
using namespace std;
const int g = 9.8;
int main(int argc, char** argv)
{
	int v, t;
	cout << "�Ш̧ǿ�J��t�שM�ɶ��åH�Ů欰���j" << endl;
	cin >> v >> t;
	cout << "��t�סG" << v << endl;
	cout << "�ɶ��G" << t << endl;
	int distance = v*t + g * pow(t, 2) / 2;
	cout << "�Ҧ樫���Z�����G" << distance << endl;
	system("PAUSE");
	return 0;
}