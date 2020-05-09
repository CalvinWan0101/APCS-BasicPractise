#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	char b;
	string a[100];
	for (int i = 0; i < 100; i++)
	{
		cin >> b;
		a[i] = b;
		if (b == 'a')
		{
			for (int j = 0; j < i; j++)
				cout << a[j];
			break;
		}
	}
	system("PAUSE");
	return 0;
}