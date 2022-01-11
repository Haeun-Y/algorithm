#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int bookNum = 0; 
	scanf_s("%d", &bookNum);

	vector<string> bookList(bookNum);

	for (int i = 0; i < bookNum; i++)
		cin >> bookList[i];

	sort(bookList.begin(), bookList.end());

	int max = 0;
	string maxStr;
	for (int i = 0; i < bookNum; i++)
	{
		int num = 1;
		while (i < bookNum - 1 && bookList[i] == bookList[i + 1])
		{
			num++;
			i++;
		}
		if (num > max)
		{
			max = num;
			maxStr = bookList[i];
		}
	}

	cout << maxStr;
}