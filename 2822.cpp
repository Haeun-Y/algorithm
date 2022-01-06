#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}
bool cmp2(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}
int main(void)
{
	const int numOfProblem = 8;
	vector<pair<int, int>> list(numOfProblem);

	for (int i = 0; i < numOfProblem; i++)
	{
		scanf_s("%d", &list[i].first);
		list[i].second = i + 1;
	}

	sort(list.begin(), list.end(), cmp);

	int total = 0;
	for (int i = 2; i < numOfProblem; i++)
		total += list[i].first;

	list[0].first = -10;
	list[1].first = -10;
	list[2].first = -10;

	sort(list.begin(), list.end(), cmp2);

	printf("%d", total);
	for (int i = 0; i < numOfProblem; i++)
	{
		if (list[i].first != -10)
			printf("%d ", list[i].second);
	}
}