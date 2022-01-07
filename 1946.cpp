#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}
int main(void)
{
	int testCase = 0;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int numOfApplicant = 0;
		scanf_s("%d", &numOfApplicant);
		
		vector<pair<int, int>> list(numOfApplicant);

		for (int i = 0; i < numOfApplicant; i++)
		{
			scanf_s("%d %d", &list[i].first, &list[i].second);
		}
		sort(list.begin(), list.end(), cmp);
		//첫번째 순위로 오름차순

		int result = 1;
		int min = list[0].second;
		for (int i = 1; i < numOfApplicant; i++)
		{
			if (min > list[i].second)
			{
				result++;
				min = list[i].second;
			}
		}
		printf("%d\n", result);
	}
}