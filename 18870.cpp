#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
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
	int num = 0;
	scanf_s("%d", &num);

	vector<pair<int,int>> dotList(num);

	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &dotList[i].first);
		dotList[i].second = i;
	}

	sort(dotList.begin(), dotList.end(), cmp);

	dotList[0].first = 0;
	int j = 1;

	for (int i = 1; i < num; i++)
	{
		if (dotList[i].first == dotList[i - 1].first)
		{
			dotList[i].first = dotList[i - 1].first;
		}
		else
		{
			dotList[i].first = j;
			j++;
		}
	}

	sort(dotList.begin(), dotList.end(), cmp2);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", dotList[i].first);
	}
}