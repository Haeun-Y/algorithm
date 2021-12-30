#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n = 0, m = 0;
	scanf_s("%d %d", &n, &m);
	
	vector<string> list(n + m);
	vector<string> list2;
	for (int i = 0; i < n + m; i++)
		cin >> list[i];
	
	sort(list.begin(), list.end());

	int num = 0;
	for (int i = 0; i < n+m-1; i++)
	{
		if (list[i] == list[i + 1])
		{
			list2.push_back(list[i]);
			num++;
			continue;
		}
	}

	printf("%d\n", num);
	for (int i = 0; i < num; i++)
		cout << list2[i] << "\n";
}