#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	vector<int> list(num);
	
	for (int i = 0; i < num; i++)
		scanf_s("%d", &list[i]);

	sort(list.begin(), list.end());

	int max = 0;
	int max_num = 0;
	int sum = 0;

	for (int i = 0; i < num-1; i++)
	{
		int tmp = 0;
		while (i < (num - 1) && list[i] == list[i + 1])
		{
			tmp++;
			printf("%d!!!\n", sum);
			i++;
		}
		if (tmp > max)
		{
			max = tmp;
			max_num = list[i];
		}

	}
	if (max == 0)
		max_num = list[1];
	for (int i = 0; i < num; i++)
		sum += list[i];

	printf("%.0f\n", (double)sum / num);
	printf("%d\n", list[num / 2]);
	printf("%d\n", max_num);
	printf("%d", list.back() - list.front());

}