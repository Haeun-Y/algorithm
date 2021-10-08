#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t = 0;
	scanf_s("%d", &t);
	string arr[1000];

	for (int i = 0; i < t; i++)
	{
		int num = 0;
		cin >> num >> arr[i];
		arr[i].replace(num - 1, 1, "");
		
	}

	for (int i = 0; i < t; i++)
		cout << arr[i] << endl;
}