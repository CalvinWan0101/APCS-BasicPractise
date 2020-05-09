#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int limit;
	cout << "印出數字量：";
	cin >> limit;
	//使用陣列
	int array[1000];
	//使得array陣列即為費氏數列
	array[0] = 0;
	array[1] = 1;
	array[2] = 1;
	for (int i = 3; i <= 1000; i++)
		array[i] = array[i - 1] + array[i - 2];
	//印出所輸入的數量
	for (int i = 1; i <= limit; i++)
		cout << array[i] << " ";
	cout << endl;
	system("PAUSE");
	return 0;
}