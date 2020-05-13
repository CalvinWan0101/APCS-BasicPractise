#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[100];
	double sum=0;
	for (int i = 0; i < 100; i++)
	{
		array[i] = 0 + rand() % (99 - 0 + 1);
		sum += array[i];
	}
	cout << sum / 100 << endl;
	system("PAUSE");
	return 0;
}