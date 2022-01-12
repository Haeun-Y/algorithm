#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int cardNum = 0;
	scanf_s("%d", &cardNum);

	vector<int> list(cardNum+1);
	vector<int> list2(cardNum + 1);

	for (int i = 1; i <= cardNum; i++)
		scanf_s("%d", &list[i]);

	list[0] = 0;

	list2.assign(list.begin(), list.end());

	for (int i = 2; i <= cardNum; i++)
	{
		int max = 0;
		for (int j = 1; j <= i; j++)
		{
			
			int tmp = list2[j] + list[i - j];
			if (max < tmp)
				max = tmp;
		}
		list2[i] = max;
	}
	
	printf("%d", list2[cardNum]);
}