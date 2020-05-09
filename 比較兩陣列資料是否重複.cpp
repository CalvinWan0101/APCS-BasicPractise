#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a[6] = { 3,1,4,5,6,7 };
	int b[5] = { 5,1,7,4,3 };
	int c[5] = {0};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 6; j++)
			if (b[i] == a[j])
			{
				c[i] = b[i];
				b[i] = a[j] = 0;
			}
	for (int i = 0; i < 5; i++)
		if(c[i]!=0)
		cout << c[i] << " ";
	system("PAUSE");
	return 0;
}