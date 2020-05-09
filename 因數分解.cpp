#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "檢測的數字：";
	cin >> n;
	int orgin = n;
	cout << n << "=";
	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}
		if (orgin==i)
		cout << "質數" << endl;
		else if (count == 1)
			cout << i << ((n == 1) ? "\n" : "*");
		else if (count > 1)
			cout << i << "^" << count << ((n == 1) ? "\n" : "*");
	}
	system("PAUSE");
	return 0;
}