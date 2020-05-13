#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char** argv)
{
	int array[1000];
	int i = 0;
	int a=1;
	while (true)
	{
		array[i] = 0 + rand() % (99 - 0 + 1);
		
		for (int j = i; j >= 0; j--)
		{
			if (array[i] == array[j]&&i!=j)
			{
				cout << "可" << i << "教=可" << j << "教=" << array[i] << endl;
				a = 0;
				break;
			}
		}
		i++;
		if (a == 0)
			break;
	}
	system("PAUSE");
	return 0;
}