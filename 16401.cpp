#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int len, int numOfNephew,vector<int> snackList)
{
	int checkNum = 0;
	for (int i = snackList.size() - 1; i >= 0; i--)
	{
		if (snackList[i] >= len)
		{
			int tmp = snackList[i];
			while (tmp - len >= 0)
			{
				checkNum++;
				tmp -= len;
			}
			if (checkNum >= numOfNephew)
				return true;
			else continue;
		}
		else
			return false;
	}
}
int binarySearch(int numOfNephew, vector<int> snackList)
{
	int begin = 1, end = snackList.back();
	int max_len = 0;

	while (begin <= end)
	{
		int mid = (begin + end) / 2;
		if (check(mid, numOfNephew, snackList))
		{
			if (max_len < mid)
				max_len = mid;
			begin = mid + 1;
		}
		else
			end = mid - 1;
	}


	return max_len;


}
int main(void)
{
	int numOfNephew = 0, numOfSnack = 0;
	scanf_s("%d %d", &numOfNephew, &numOfSnack);

	vector<int> snackList(numOfSnack);

	int total = 0;
	for (int i = 0; i < numOfSnack; i++)
	{
		scanf_s("%d", &snackList[i]);
		total += snackList[i];
	}

	if (total < numOfNephew)
	{
		printf("0");
	}
	
	else
	{
		sort(snackList.begin(), snackList.end());
		printf("%d", binarySearch(numOfNephew, snackList));
	}
	

}
