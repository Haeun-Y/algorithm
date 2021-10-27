#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int testNum = 0;
	scanf_s("%d", &testNum);

	for (int i = 0; i < testNum; i++)
	{
		int arr[7] = { 0, };
		int sum = 0;
		for (int j = 0; j < 7; j++)
		{
			int num = 0;
			scanf_s("%d", &num);
			if (num % 2 == 0)
			{
				sum += num;
				arr[j] = num;
			}
			else
				arr[j] = 101;
		}
	
		sort(arr, arr + 7);
		printf("%d %d\n",sum, arr[0]);
		
	}
}