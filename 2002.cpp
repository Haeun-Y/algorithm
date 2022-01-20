#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	vector<string> list(n);
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		list[i] = str;
	}

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		vector<string>::iterator it;
		it = find(list.begin(), list.end(), str);
		if (it-list.begin() > i)
			result++;
	}

	printf("%d", result);
}