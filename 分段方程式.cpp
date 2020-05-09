#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	float x;
	float y;
	cout << "x=";
	cin >> x;
	if (x > 3)
		y = x + 3;
	else if (x >= 1)
		y = pow(x, 2);
	else if (x > 0)
		y = sqrt(x);
	else
		y = 0;
	cout << y << endl;


	system("PAUSE");
	return 0;
}