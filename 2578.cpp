#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct block
{
	int row;
	int col;
	int num;

}num;
bool cmp(block a, block b)
{
	return a.num < b.num;//num기준으로 오름차순
}
block binarySearch(vector<block>& v, int target)
{
	int start = 0;
	int end = v.size()-1;
	int mid = 0;
	
	while (start <= end && start >= 0 && end <= v.size()-1)
	{
		mid = (start + end) / 2;

		if (v[mid].num == target)
			return v[mid];
		else if (v[mid].num < target)
			start = mid + 1;
		else// v[mid].num > target
			end = mid - 1;
	}

	//사회자는 1 <= n <= 25 인 수 n만을 부르기때문에 fail을 return 할 일은 없음
	block fail;
	fail.col = fail.row = fail.num = -1;

	return fail;
}
int main(void)
{
	vector<block> list(25);
	vector<int> row(5, 5);//0-4
	vector<int> col(5, 5);//0-4
	vector<int> diagonal(2, 5);//0-1
	int result = 0;

	int i = 0;
	for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				list[i].row = j;
				list[i].col = k;
				scanf_s("%d", &list[i].num);
				i++;
			}
		}
	

	sort(list.begin(), list.end(), cmp);

	vector<int> mcList(26);

	for (int i = 1; i <= 25; i++)
		scanf_s("%d", &mcList[i]);

	for (int i = 1; i <= 25; i++)
	{
		
		block blockToErase = binarySearch(list, mcList[i]);
		if (blockToErase.col == blockToErase.row)
			if (--diagonal[0] == 0)
				result++;
		if (blockToErase.col + blockToErase.row == 4)
			if (--diagonal[1] == 0)
				result++;
		if (--col[blockToErase.col] == 0)
			result++;
		if (--row[blockToErase.row] == 0)
			result++;

		if (result >= 3)
		{
			printf("%d", i);
			break;
		}
	}
}